#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    std::sort(data.begin(), data.end()); // uses a highly optimized sort (Introsort)

    std::cout << "Array after std::sort: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}