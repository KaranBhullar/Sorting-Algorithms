#include "SelectionSort.h"
#include <iostream>
using namespace std;

int* SelectionSort::sort(int* arr, int size) {
    int smallest;

    for (int i=0; i < size; i++) {
        smallest = arr[i];
        for (int j=i; j < size; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        swap( &arr[i], &arr[smallest]);
    }
    return arr;
}

void SelectionSort::swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}