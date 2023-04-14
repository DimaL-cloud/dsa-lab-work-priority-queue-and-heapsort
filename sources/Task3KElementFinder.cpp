#include <iostream>
#include <vector>

#include "../headers/algorithms/numberFinder.h"

#define ELEMENTS_AMOUNT 10

using namespace std;

vector<int> getRandomArray() {
    vector<int> numbers;

    for (int i = 0; i < ELEMENTS_AMOUNT; i++) {
        numbers.push_back(rand() % 200 - 100);
    }

    return numbers;
}

void printArray(vector<int> array) {
    for (int i : array) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    srand(time(nullptr));

    vector<int> numbers = getRandomArray();

    cout << "Generated array" << endl;
    printArray(numbers);

    cout << endl;

    cout << "Smallest k numbers" << endl;

    for (int i = 1; i <= numbers.size(); i++) {
        int kSmallestNumber = SmallestNumberFinder::findSmallestKNumber(numbers, i);

        cout << "i = " << i << ": " << kSmallestNumber << endl;
    }

    return 0;
}
