#ifndef LAB3_PRIORITYQUEUETEST_H
#define LAB3_PRIORITYQUEUETEST_H

#include <queue>
#include <ctime>
#include <iostream>

#include "../data_structures/priorityQueue.h"
#include "../entities/assignment.h"

using namespace std;

struct PriorityQueueTest {
public:
    template<typename T>
    static float testPriorityQueueSpeed(T&& priorityQueue);

    static bool testPriorityQueue();
};


#endif //LAB3_PRIORITYQUEUETEST_H
