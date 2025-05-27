#include <iostream>
#include <vector>
#include <algorithm> // for std::sort and std::binary_search

//iterative binary search
int binarySearch(const std::vector<int>& sorted_arr, int target) {
    int left = 0;
    int right = sorted_arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // avoid potential overflow

        if (sorted_arr[mid] == target) {
            return mid; // found
        }
        if (sorted_arr[mid] < target) {
            left = mid + 1; // search in the right half
        } else {
            right = mid - 1; // search in the left half
        }
    }
    return -1; // not found
}

int main() {
    std::vector<int> data = {5, 8, 10, 17, 25, 30}; // must be sorted!
    // if not sorted: std::sort(data.begin(), data.end());
    int targetValue = 17;
    int result = binarySearch(data, targetValue);

    if (result != -1) {
        std::cout << "Target " << targetValue << " found at index " << result << std::endl;
    } else {
        std::cout << "Target " << targetValue << " not found." << std::endl;
    }

    // using C++ STL for binary search
    if (std::binary_search(data.begin(), data.end(), 25)) {
            std::cout << "STL: 25 is present in the vector." << std::endl;
    }

    return 0;
}