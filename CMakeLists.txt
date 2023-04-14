cmake_minimum_required(VERSION 3.23)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)


add_executable(Task1PriorityQueue
        sources/Task1PriorityQueue.cpp
        sources/entities/Assignment.cpp
        sources/tests/PriorityQueueTest.cpp
        sources/algorithms/HeapSort.cpp
        sources/algorithms/NumberFinder.cpp)

add_executable(Task2Sorting
        sources/Task2Sorting.cpp
        sources/algorithms/HeapSort.cpp
        )

add_executable(Task3KElement
        sources/Task3KElementFinder.cpp
        sources/algorithms/NumberFinder.cpp)
