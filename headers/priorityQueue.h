#ifndef LAB3_PRIORITYQUEUE_H
#define LAB3_PRIORITYQUEUE_H

#include "binaryHeap.h"
#include "assignment.h"

template <typename T>
struct PriorityQueue {
private:
    BinaryHeap<T> binaryHeap;

public:
    void push(const T &element);

    const T &top();

    void pop();

    int size();

    bool empty();

    void clean();
};

template <typename T>
void PriorityQueue<T>::push(const T &element) {
    binaryHeap.addElement(element);
}

template <typename T>
const T &PriorityQueue<T>::top() {
    return binaryHeap.getRoot();
}

template <typename T>
void PriorityQueue<T>::pop() {
    binaryHeap.removeRoot();
}

template <typename T>
int PriorityQueue<T>::size() {
    return binaryHeap.size();
}

template <typename T>
bool PriorityQueue<T>::empty() {
    return binaryHeap.empty();
}

template <typename T>
void PriorityQueue<T>::clean() {
    binaryHeap.clean();
}

#endif //LAB3_PRIORITYQUEUE_H
