#include <iostream>

#include "headers/priorityQueue.h"

using namespace std;

#include <queue>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

template <typename T>
float testPriorityQueueSpeed(T&& priorityQueue)
{
    const int iters = 100000;

    clock_t timeStart = clock();
    for (int i = 0; i < iters; i++)
    {
        int insertDataAmount = rand() % 6 + 5;
        for (int j = 0; j < insertDataAmount; j++)
        {
            priorityQueue.push(Assignment());
        }

        priorityQueue.top();
        priorityQueue.pop();
    }
    clock_t timeEnd = clock();
    float time = (float(timeEnd - timeStart)) / CLOCKS_PER_SEC;

    return time;
}

bool testPriorityQueue()
{
    srand(time(NULL));

    const int iters = 20000;

    PriorityQueue myPriorQueue;
    priority_queue<Assignment> stlPriorQueue;

    bool isDataEqual = true;
    for (int i = 0; i < iters; i++)
    {
        int insertDataAmount = rand() % 6 + 5;
        for (int j = 0; j < insertDataAmount; j++)
        {
            Assignment randData = Assignment();
            myPriorQueue.push(randData);
            stlPriorQueue.push(randData);
        }

        if (!(myPriorQueue.top() == stlPriorQueue.top()))
        {
            isDataEqual = false;
            cerr << "Comparing failed on iteration " << i << endl << endl;
            break;
        }

        int removeDataAmount = rand() % insertDataAmount;
        for (int j = 0; j < removeDataAmount; j++)
        {
            myPriorQueue.pop();
            stlPriorQueue.pop();
        }
    }

    int myQueueSize = myPriorQueue.size();
    int stlQueueSize = stlPriorQueue.size();

    float stlTime = testPriorityQueueSpeed<priority_queue<Assignment>>(priority_queue<Assignment>());
    float myTime = testPriorityQueueSpeed<PriorityQueue>(PriorityQueue());

    cout << "My PriorityQueue:" << endl;
    cout << "Time: " << myTime << ", size: " << myQueueSize << endl;
    cout << "STL priority_queue:" << endl;
    cout << "Time: " << stlTime << ", size: " << stlQueueSize << endl << endl;

    if (isDataEqual && myQueueSize == stlQueueSize)
    {
        cout << "The lab is completed" << endl << endl;
        return true;
    }

    cerr << ":(" << endl << endl;
    return false;
}

void print(PriorityQueue priorityQueue) {
    while (!priorityQueue.empty()) {
        cout << priorityQueue.top() << endl;
        priorityQueue.pop();
    }
}

int main() {
    srand(time(nullptr));

    testPriorityQueue();

//    PriorityQueue priorityQueue;
//
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, LOW));
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, MEDIUM));
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, HIGH));
//    priorityQueue.push(Assignment(HIGH, HIGH, MEDIUM));
//    priorityQueue.push(Assignment(HIGH, HIGH, MEDIUM));
//
//    print(priorityQueue);

//    priorityQueue.pop();
//    priorityQueue.pop();
//    priorityQueue.pop();
//    priorityQueue.pop();

    return 0;
}
