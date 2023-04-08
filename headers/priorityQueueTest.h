#ifndef LAB3_PRIORITYQUEUETEST_H
#define LAB3_PRIORITYQUEUETEST_H

#include <queue>
#include <ctime>
#include <iostream>

#include "priorityQueue.h"
#include "assignment.h"

using namespace std;

struct priorityQueueTest {
public:
    template <typename T>
    static float testPriorityQueueSpeed(T&& priorityQueue);

    static bool testPriorityQueue();
};


#endif //LAB3_PRIORITYQUEUETEST_H
