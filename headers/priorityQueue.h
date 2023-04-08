#ifndef LAB3_PRIORITYQUEUE_H
#define LAB3_PRIORITYQUEUE_H

#include "binaryHeap.h"
#include "assignment.h"

struct PriorityQueue {
private:
    BinaryHeap binaryHeap;

public:
    void push(Assignment assignment);

    Assignment top();

    void pop();

    int size();

    bool empty();

    void clean();
};

#endif //LAB3_PRIORITYQUEUE_H
