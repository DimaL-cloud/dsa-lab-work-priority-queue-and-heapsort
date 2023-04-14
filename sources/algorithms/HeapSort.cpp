#include "../../headers/algorithms/heapSort.h"

void HeapSort::sort(vector<int> &elements) {
    BinaryHeap<int> binaryHeap = buildBinaryHeap(elements);

    for (int i = elements.size() - 1; i >= 0; i--) {
        swap(elements[0], elements[i]);

        binaryHeap.siftDown(elements, 0, i);
    }
}

BinaryHeap<int> HeapSort::buildBinaryHeap(vector<int> &elements) {
    BinaryHeap<int> binaryHeap = BinaryHeap<int>();

    for (int i = elements.size() / 2 - 1; i >= 0; i--) {
        binaryHeap.siftDown(elements, i, elements.size());
    }

    return binaryHeap;
}