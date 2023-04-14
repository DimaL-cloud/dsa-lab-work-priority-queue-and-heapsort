#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../headers/data_structures/priorityQueue.h"
#include "../headers/tests/priorityQueueTest.h"

using namespace std;

template<typename T>
void printPriorityQueue(PriorityQueue<T> priorityQueue) {
    while (!priorityQueue.empty()) {
        cout << priorityQueue.top() << endl;
        priorityQueue.pop();
    }

    cout << endl;
}

void printPriorityQueueExample() {
    PriorityQueue<Assignment> priorityQueue;

    for (int i = 0; i < 10; i++) {
        auto randomInterest = Evaluation(rand() % 3);
        auto randomComplexity = Evaluation(rand() % 3);
        auto randomUsefulness = Evaluation(rand() % 3);

        priorityQueue.push(
                Assignment(randomInterest, randomComplexity, randomUsefulness)
        );
    }

    cout << "Priority queue example:" << endl;

    printPriorityQueue(priorityQueue);

    for (int i = 0; i < 5; i++) {
        priorityQueue.pop();
    }

    printPriorityQueue(priorityQueue);
}

int main() {
    srand(time(nullptr));

    PriorityQueueTest::testPriorityQueue();

    printPriorityQueueExample();

    return 0;
}
