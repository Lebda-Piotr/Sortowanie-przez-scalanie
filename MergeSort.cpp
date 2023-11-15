#include "MergeSort.h"
#include <iostream>
#include <vector>

using namespace std;

void MergeSort::merge(vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Tworzenie tymczasowych tablic do przechowywania dwóch fragmentów
    vector<int> L(n1), R(n2);

    // Kopiowanie danych do tablic tymczasowych L[] i R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Scalanie dwóch tablic tymczasowych do jednej posortowanej
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Kopiowanie pozostałych elementów z L[], jeśli istnieją
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Kopiowanie pozostałych elementów z R[], jeśli istnieją
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}