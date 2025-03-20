#include "generate_list.h"
#include <cstdlib>
#include <ctime>
std::vector<int> generateList(int size, int minVal, int maxVal) {
    std::vector<int> list;
    list.reserve(size);
    for (int i = 0; i < size; ++i) {
        int randomValue = minVal + (rand() % (maxVal - minVal + 1));
        list.push_back(randomValue);
    }
    return list;
}