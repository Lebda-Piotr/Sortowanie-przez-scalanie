// MergeSort.h
#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
    
    private: 
    // Pomocnicza funkcja do scalania dwóch posortowanych fragmentów
    void merge(std::vector<int>& arr, int left, int middle, int right);


    public:
    MergeSort() = default;
    ~MergeSort() = default;

    // Metoda sortująca przez scalanie
    void mergeSort(std::vector<int>& arr);
    };

#endif // MERGESORT_H
