#include "headers/priorityQueue.h"

void PriorityQueue::push(Assignment assignment) {
    binaryHeap.addElement(assignment);
}

Assignment PriorityQueue::top() {
    return binaryHeap.getRoot();
}

void PriorityQueue::pop() {
    binaryHeap.removeRoot();
}

int PriorityQueue::size() {
    return binaryHeap.size();
}

bool PriorityQueue::empty() {
    return binaryHeap.empty();
}

void PriorityQueue::clean() {
    binaryHeap.clean();
}


