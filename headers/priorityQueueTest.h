#ifndef LAB3_PRIORITYQUEUETEST_H
#define LAB3_PRIORITYQUEUETEST_H

#include <queue>
#include <ctime>
#include <iostream>

#include "priorityQueue.h"
#include "assignment.h"

using namespace std;

struct PriorityQueueTest {
public:
    template<typename T>
    float testPriorityQueueSpeed(T&& priorityQueue);

    bool testPriorityQueue();
};


#endif //LAB3_PRIORITYQUEUETEST_H
