#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> studentAges;

    studentAges["Alice"] = 20;
    studentAges["Bob"] = 21;
    studentAges["Charlie"] = 19;
    studentAges.insert({"David", 22});

    std::cout << "Age of Alice: " << studentAges["Alice"] << std::endl;

    studentAges["Alice"] = 21;
    std::cout << "Updated age of Alice: " << studentAges["Alice"] << std::endl;

    if (studentAges.count("Charlie")) {
        std::cout << "Charlie is in the data with age: " << studentAges["Charlie"] << std::endl;
    }

    std::cout << "List of students and their ages:" << std::endl;
    for (const auto& pair : studentAges) {
        std::cout << pair.first << ": " << pair.second << " years old" << std::endl;
    }

    studentAges.erase("Alice");

    return 0;
}