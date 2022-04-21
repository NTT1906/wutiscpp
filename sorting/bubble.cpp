//
// Created on 21/04/2022.
// Bubble Sort - Sắp xếp nổi
//

#include <iostream>

void bubble_sort(int a[], int n){
    for (int i = 0; i < n - 1; ++i)
        for (int j = n - 1; j > i; --j)
            if(a[j] < a[j-1]) std::swap(a[j], a[j-1]);
}