#ifndef LAB3_HEAPSORT_H
#define LAB3_HEAPSORT_H

#include "../data_structures/binaryHeap.h"

struct HeapSort {
public:
    static void sort(vector<int> &elements);

private:
    static BinaryHeap<int> buildBinaryHeap(vector<int> &elements);
};

#endif //LAB3_HEAPSORT_H
