//
// Created on 21/04/2022.
// Interchange Sort - Sắp xếp đổi chỗ trực tiếp
//
#include <iostream>

void interchange_sort(int a[], int n){
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (a[i] > a[j]) std::swap(a[i], a[j]);
}