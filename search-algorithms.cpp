#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // return index if found
        }
    }
    return -1; // return -1 if not found
}

int main() {
    std::vector<int> data = {10, 25, 5, 17, 30, 8};
    int targetValue = 17;
    int result = linearSearch(data, targetValue);

    if (result != -1) {
        std::cout << "Target " << targetValue << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << targetValue << " not found." << std::endl;
    }
    return 0;
}