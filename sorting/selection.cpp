//
// Created on 21/04/2022.
// Selection Sort - Sắp xếp chọn lọc
//
void selection_sort(int a[], int n){
    int min; // chỉ số phần tử nhỏ nhất trong dãy hiện hành
    for (int i = 0; i < n - 1; ++i){
        min = i;
        for(int j = i + 1; j < n; ++j)
            if (a[j] < a[min])
                min = j; // ghi nhận vị trí phần tử nhỏ nhất
        if (min != i)
            std::swap(a[min], a[i]);
    }
}