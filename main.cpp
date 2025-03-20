#include <iostream>
#include <vector>
#include "CPlusPoc/generate_list.h"
int main() {
    srand(time(0));
    int size = 10;
    int minVal = 1;
    int maxVal = 100;
    std::vector<int> myList = generateList(size, minVal, maxVal);
    std::vector<int> filteredList;
    for (int num : myList) {
        if (num < 50) {
            filteredList.push_back(num);
        }
    }
    std::cout << "Numbers under 50: ";
    for (int num : filteredList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}