#include <iostream>
#include <array>

int main(){

    std::array<int, 5> a = {1, 2, 3, 4, 5};
    
    std::cout << "Array elements: ";
    for (int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}