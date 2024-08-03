#include "BaiTap.h"

#include<stdio.h>

int Fibonacci(int n) {
    if (n <= 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}


void bai7() {

    int n;
    printf("Nhập số thứ tự n: ");
    scanf_s("%d", &n);
    int result = Fibonacci(n);
    printf("Số Fibonacci thứ %d là: %d\n", n, result);
	return;
}