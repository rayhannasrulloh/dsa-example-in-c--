#include <iostream>
#include <vector>
#include <utility> // for std::swap

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) // if no two elements were swapped by inner loop, then break
            break;
    }
}

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(data);
    std::cout << "Array after Bubble Sort: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}