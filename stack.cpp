#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl;

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    std::cout << "Stack size: " << myStack.size() << std::endl;

    std::cout << "Stack elements (from top to bottom): ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    return 0;
}