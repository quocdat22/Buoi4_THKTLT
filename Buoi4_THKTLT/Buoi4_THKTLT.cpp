// Buoi4_THKTLT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>

// Hàm tính giai thừa đệ quy
int factorial(int n) {
    if (n <= 1) {
        return 1; // Điều kiện dừng: giai thừa của 0 hoặc 1 là 1
    }
    else {
        return n * factorial(n - 1); // Đệ quy: n! = n * (n-1)!
    }
}

// Hàm tính tổng từ 1 đến n bằng đệ quy


// Hàm tính tổng từ 1 đến n bằng đệ quy
int sumRecursive(int n) {
    if (n <= 0) {
        return 0; // Điều kiện dừng: nếu n không phải số nguyên dương
    }
    else {
        return n + sumRecursive(n - 1); // Đệ quy: tổng = n + tổng của các số từ 1 đến (n-1)
    }
}

int main()
{

    int n;

    // Nhập số nguyên dương từ người dùng
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
    }
    else {
        // Tính tổng và xuất kết quả
        printf("Tong S(%d) theo cach de quy la: %d\n", n, sumRecursive(n));
    }

    return 0;
}

