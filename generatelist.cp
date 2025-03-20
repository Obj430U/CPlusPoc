#include <iostream>
#include <vector>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

// Function to generate and fill a list with random values
std::vector<int> generateList(int size, int minVal, int maxVal) {
    std::vector<int> list;
    list.reserve(size);
    
    for (int i = 0; i < size; ++i) {
        int randomValue = minVal + (rand() % (maxVal - minVal + 1));
        list.push_back(randomValue);
    }
    return list;
}

int main() {
    srand(time(0)); // Seed the random number generator
    
    int size = 10;    // Size of the list
    int minVal = 1;   // Minimum random value
    int maxVal = 100; // Maximum random value
    
    std::vector<int> myList = generateList(size, minVal, maxVal);
    
    // Print the generated list
    std::cout << "Generated List: ";
    for (int num : myList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}