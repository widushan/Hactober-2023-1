#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    // Convert the vector into a max heap using std::make_heap
    std::make_heap(heap.begin(), heap.end());

    std::cout << "Max heap: ";
    for (const int& element : heap) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Push a new element into the heap while maintaining the max heap property
    heap.push_back(7);
    std::push_heap(heap.begin(), heap.end());

    std::cout << "Max heap after push: ";
    for (const int& element : heap) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Pop the maximum element from the heap and place it at the end
    std::pop_heap(heap.begin(), heap.end());
    int maxElement = heap.back();
    heap.pop_back();

    std::cout << "Max element (popped): " << maxElement << std::endl;

    std::cout << "Heap after pop: ";
    for (const int& element : heap) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Sort the heap in ascending order using std::sort_heap
    std::sort_heap(heap.begin(), heap.end());

    std::cout << "Sorted heap (ascending order): ";
    for (const int& element : heap) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
