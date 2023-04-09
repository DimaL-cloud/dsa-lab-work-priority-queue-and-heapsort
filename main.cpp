#include <iostream>

#include "headers/priorityQueue.h"
#include "headers/priorityQueueTest.h"

using namespace std;

#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
void printPriorityQueue(PriorityQueue<T> priorityQueue) {
    while (!priorityQueue.empty()) {
        cout << priorityQueue.top() << endl;
        priorityQueue.pop();
    }
}

int main() {
    srand(time(nullptr));

    PriorityQueueTest priorityQueueTest;
    priorityQueueTest.testPriorityQueue();

//    PriorityQueue priorityQueue;
//
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, LOW));
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, MEDIUM));
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, MEDIUM));
//    priorityQueue.push(Assignment(HIGH, HIGH, MEDIUM));
//
//    printPriorityQueue(priorityQueue);

//    priorityQueue.pop();
//    priorityQueue.pop();
//    priorityQueue.pop();
//    priorityQueue.pop();

    return 0;
}
