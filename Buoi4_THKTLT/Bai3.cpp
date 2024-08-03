#include "BaiTap.h"
#include<stdio.h>

int Un(int a, int r, int n) {
    if (n == 1)
        return a;
    return Un(a, r, n - 1) + r;
}

void bai3() {
    int a, r, n;
    printf("Nhập hạng đầu a: ");
    scanf_s("%d", &a);
    printf("Nhập công sai r: ");
    scanf_s("%d", &r);
    printf("Nhập số thứ tự phần tử n: ");
    scanf_s("%d", &n);
    int result = Un(a, r, n);
    printf("Giá trị phần tử thứ %d của cấp số cộng là: %d\n", n, result);


	return;
}