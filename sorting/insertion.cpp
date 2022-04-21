//
// Created on 21/04/2022.
// Insertion Sort Sắp xếp chèn
//
void insertion_sort(int a[], int n){
    int pos, x;
    for(int i = 1; i < n; ++i){
        x = a[i];
        pos = i;
        while(pos > 0 && x < a[pos-1]){
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = x;
    }
}