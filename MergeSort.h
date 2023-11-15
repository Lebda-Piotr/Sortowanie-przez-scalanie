// MergeSort.h
#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
    private: 
    public:
    MergeSort() = default;
    ~MergeSort() = default;

    // Metoda sortująca przez scalanie
    void mergeSort(std::vector<int>& arr);
    };

#endif // MERGESORT_H
