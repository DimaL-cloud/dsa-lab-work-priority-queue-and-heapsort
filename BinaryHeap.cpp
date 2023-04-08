#include "headers/binaryHeap.h"

void BinaryHeap::addElement(Assignment assignment) {
    elements.push_back(assignment);

    siftUp(elements.size() - 1);
}

Assignment BinaryHeap::getRoot() {
    if (elements.empty()) {
        throw range_error("No nodes in binary heap");
    }

    return elements[0];
}

void BinaryHeap::removeRoot() {
    if (elements.empty()) {
        throw range_error("No nodes in binary heap");
    }

    swap(elements[0], elements[elements.size() - 1]);
    elements.pop_back();

    siftDown(0);
}

int BinaryHeap::getParent(int index) const {
    return (index - 1) / 2;
}

int BinaryHeap::getLeftChild(int index) const {
    return 2 * index + 1;
}

int BinaryHeap::getRightChild(int index) const {
    return 2 * index + 2;
}

void BinaryHeap::siftUp(int index) {
    int parentIndex = getParent(index);

    if (index > 0 && elements[index] > elements[parentIndex]) {
        swap(elements[parentIndex], elements[index]);
        siftUp(parentIndex);
    }
}

void BinaryHeap::siftDown(int index) {
    int leftChildIndex = getLeftChild(index);
    int rightChildIndex = getRightChild(index);

    int maxChildIndex;

    if (rightChildIndex >= elements.size() || elements[leftChildIndex] > elements[rightChildIndex]) {
        maxChildIndex = leftChildIndex;
    } else maxChildIndex = rightChildIndex;

    if (maxChildIndex < elements.size() && elements[index] < elements[maxChildIndex]) {
        swap(elements[maxChildIndex], elements[index]);
        siftDown(maxChildIndex);
    }
}

int BinaryHeap::size() {
    return elements.size();
}

bool BinaryHeap::empty() {
    return elements.size() == 0;
}

void BinaryHeap::clean() {
    elements.clear();
}

