// main.cpp
#include "MergeSort.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Przykładowe użycie sortowania przez scalanie
    vector<int> array = {10, 11, 11, 13, 5, 6, 7, 19};

    cout << "Przed posortowaniem: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
    MergeSort mergeSortObj;
    mergeSortObj.mergeSort(array);

    cout << "Po posortowaniu: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}