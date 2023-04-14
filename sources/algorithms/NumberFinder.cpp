#include "../../headers/algorithms/numberFinder.h"

int SmallestNumberFinder::findSmallestKNumber(vector<int> &elements, int k) {
    BinaryHeap<int> binaryHeap;

    if (k <= 0 || k > elements.size()) {
        throw range_error("k must be non-negative, equal to 0 and not larger than array size");
    }

    for (int i = k - 1; i >= 0; i--) {
        binaryHeap.siftDown(elements, i, k);
    }

    for (int i = k; i < elements.size(); i++) {
        if (elements[i] < elements[0]) {
            swap(elements[i], elements[0]);
            binaryHeap.siftDown(elements, 0, k);
        }
    }

    return elements[0];
}
