//
// Created on 21/04/2022
// Code from https://nguyenvanhieu.vn/thuat-toan-tim-uoc-chung-lon-nhat/
//
#include <stdio.h>

///Using subtraction method
int gcd1(int a, int b){
    // If a = 0 => gcd(a,b) = b
    // If b = 0 => gcd(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b; // a = a - b
        } else {
            b -= a;
        }
    }
    return a; // return a or b, because a is equal to b at this very moment
}

/// Using division method
int gcd2(int a, int b){
    // If a = 0 => gcd(a,b) = b
    // If b = 0 => gcd(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    // Looping until a or b equal 0
    while (a*b != 0){
        if (a > b) {
            a %= b; // a = a % b
        } else {
            b %= a;
        }
    }
    return a + b; // return a + b, either a or b equals to 0
}

///Using Euclidean algorithm
// r = a % b
// gcd(a, b) = b if r = 0
// gcd(a, b) = gcd(b, r) if r != 0
int gcd3(int a, int b) {
    if (b == 0) return a;
    return gcd3(b, a % b);
}

// Without recursive
int gcd4(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

///Using built-in function
#include <algorithm>
int gcd5(int a, int b) {
    return std::__gcd(a,b);
}

int main(){
    int a = 7, b = 9;
    printf("\ngcd1(%d, %d) = %d", a, b, gcd1(a,b));
    printf("\ngcd2(%d, %d) = %d", a, b, gcd2(a,b));
    printf("\ngcd3(%d, %d) = %d", a, b, gcd3(a,b));
    printf("\ngcd4(%d, %d) = %d", a, b, gcd4(a,b));
    printf("\ngcd5(%d, %d) = %d", a, b, gcd5(a,b));
}