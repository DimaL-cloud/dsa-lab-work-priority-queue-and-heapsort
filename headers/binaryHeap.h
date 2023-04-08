#ifndef LAB3_BINARYHEAP_H
#define LAB3_BINARYHEAP_H

#include <vector>
#include "assignment.h"

using namespace std;

struct BinaryHeap {
private:
    vector<Assignment> elements;

public:
    void addElement(Assignment assignment);

    Assignment getRoot();

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

#endif //LAB3_BINARYHEAP_H
