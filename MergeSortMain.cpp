// main.cpp
#include "MergeSort.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Przykładowe użycie sortowania przez scalanie
    vector<int> array = {12, 11, 13, 5, 6, 7};

    cout << "Array before sorting: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}