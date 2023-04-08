#include <iostream>

#include "headers/priorityQueue.h"
#include "headers/priorityQueueTest.h"

using namespace std;

#include <cstdlib>
#include <ctime>

using namespace std;

void print(PriorityQueue priorityQueue) {
    while (!priorityQueue.empty()) {
        cout << priorityQueue.top() << endl;
        priorityQueue.pop();
    }
}

int main() {
    srand(time(nullptr));

    priorityQueueTest::testPriorityQueue();

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
//    print(priorityQueue);

//    priorityQueue.pop();
//    priorityQueue.pop();
//    priorityQueue.pop();
//    priorityQueue.pop();

    return 0;
}
