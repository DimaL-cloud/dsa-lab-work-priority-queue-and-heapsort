#include <iostream>
#include <vector>
#include <algorithm>

#include "../headers/algorithms/heapSort.h"

#define FIRST_CASE_ELEMENTS_AMOUNT 3'000'000
#define SECOND_CASE_ELEMENTS_AMOUNT 1'000

using namespace std;

vector<int> generateRandomArray(int elementAmount) {
    vector<int> array;

    for (int i = 0; i < elementAmount; i++) {
        array.push_back(rand() % 200 - 100);
    }

    return array;
}

vector<int> getArrayWithSameNumbers() {
    vector<int> array;

    for (int i = 0; i < FIRST_CASE_ELEMENTS_AMOUNT; i++) {
        array.push_back(1);
    }

    return array;
}

vector<int> getSortedArray() {
    vector<int> array;

    for (int i = 0; i < FIRST_CASE_ELEMENTS_AMOUNT; i++) {
        array.push_back(i);
    }

    return array;
}

vector<int> getSortedBackwardsArray() {
    vector<int> array;

    for (int i = FIRST_CASE_ELEMENTS_AMOUNT; i >= 0; i--) {
        array.push_back(i);
    }

    return array;
}

template<typename T>
double measureSortingTime(vector<int> &array) {
    clock_t startTime = clock();

    T::sort(array);

    clock_t endTime = clock();

    return (double(endTime - startTime)) / CLOCKS_PER_SEC;
}

double measureSTLSortingTime(vector<int> &array) {
    clock_t startTime = clock();

    sort(begin(array), end(array));

    clock_t endTime = clock();

    return (double(endTime - startTime)) / CLOCKS_PER_SEC;
}

int main() {
    srand(time(nullptr));

    vector<int> firstCaseArray = generateRandomArray(FIRST_CASE_ELEMENTS_AMOUNT);

    cout << "First case: random number array " << FIRST_CASE_ELEMENTS_AMOUNT << " size" << endl;
    cout << "Heapsort: " << measureSortingTime<HeapSort>(firstCaseArray) << endl;
    cout << "STL sorting: " << measureSTLSortingTime(firstCaseArray) << endl;

    cout << endl;

    vector<int> secondCaseArray = generateRandomArray(SECOND_CASE_ELEMENTS_AMOUNT);

    cout << "Second case: random number array " << SECOND_CASE_ELEMENTS_AMOUNT << " size" << endl;
    cout << "Heapsort: " << measureSortingTime<HeapSort>(secondCaseArray) << endl;
    cout << "STL sorting: " << measureSTLSortingTime(secondCaseArray) << endl;

    cout << endl;

    vector<int> thirdCaseArray = getArrayWithSameNumbers();

    cout << "Third case: array with same numbers" << endl;
    cout << "Heapsort: " << measureSortingTime<HeapSort>(thirdCaseArray) << endl;
    cout << "STL sorting: " << measureSTLSortingTime(thirdCaseArray) << endl;

    cout << endl;

    vector<int> fourthCaseArray = getSortedArray();

    cout << "Fourth case: sorted array" << endl;
    cout << "Heapsort: " << measureSortingTime<HeapSort>(fourthCaseArray) << endl;
    cout << "STL sorting: " << measureSTLSortingTime(fourthCaseArray) << endl;

    cout << endl;

    vector<int> fifthCaseArray = getSortedBackwardsArray();

    cout << "Fifth case: sorted backwards array" << endl;
    cout << "Heapsort: " << measureSortingTime<HeapSort>(fifthCaseArray) << endl;
    cout << "STL sorting: " << measureSTLSortingTime(fifthCaseArray) << endl;

    return 0;
}
