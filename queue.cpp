#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;
    
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    std::cout << "Front element: " << myQueue.front() << std::endl;
    std::cout << "Back element: " << myQueue.back() << std::endl;

    myQueue.pop();
    std::cout << "Front element after pop: " << myQueue.front() << std::endl;

    std::cout << "Queue size: " << myQueue.size() << std::endl;

    std::cout << "Queue elements (from front to back): ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " | ";
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}