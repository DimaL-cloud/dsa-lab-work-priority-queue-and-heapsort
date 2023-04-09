#ifndef LAB3_BINARYHEAP_H
#define LAB3_BINARYHEAP_H

#include <vector>

#include "assignment.h"

using namespace std;

template <typename T>
struct BinaryHeap {
private:
    vector<T> elements;

public:
    void addElement(const T &element);

    const T &getRoot();

    void removeRoot();

    int getParent(int index) const;

    int getLeftChild(int index) const;

    int getRightChild(int index) const;

    int size();

    bool empty();

    void clean();

private:
    void siftUp(int index);

    void siftDown(int index);
};

template<typename T>
void BinaryHeap<T>::addElement(const T &element) {
    elements.push_back(element);

    siftUp(elements.size() - 1);
}

template<typename T>
const T &BinaryHeap<T>::getRoot() {
    if (elements.empty()) {
        throw range_error("No nodes in binary heap");
    }

    return elements[0];
}

template<typename T>
void BinaryHeap<T>::removeRoot() {
    if (elements.empty()) {
        throw range_error("No nodes in binary heap");
    }

    swap(elements[0], elements[elements.size() - 1]);
    elements.pop_back();

    siftDown(0);
}

template<typename T>
int BinaryHeap<T>::getParent(int index) const {
    return (index - 1) / 2;
}

template<typename T>
int BinaryHeap<T>::getLeftChild(int index) const {
    return 2 * index + 1;
}

template<typename T>
int BinaryHeap<T>::getRightChild(int index) const {
    return 2 * index + 2;
}

template<typename T>
void BinaryHeap<T>::siftUp(int index) {
    int parentIndex = getParent(index);

    if (index > 0 && elements[index] > elements[parentIndex]) {
        swap(elements[parentIndex], elements[index]);
        siftUp(parentIndex);
    }
}

template<typename T>
void BinaryHeap<T>::siftDown(int index) {
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

template<typename T>
int BinaryHeap<T>::size() {
    return elements.size();
}

template<typename T>
bool BinaryHeap<T>::empty() {
    return elements.empty();
}

template<typename T>
void BinaryHeap<T>::clean() {
    elements.clear();
}

#endif //LAB3_BINARYHEAP_H
