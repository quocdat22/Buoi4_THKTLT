#include "BaiTap.h"

#include<stdio.h>
int Fibonacci8(int n) {
    if (n <= 2)
        return 1;
    return Fibonacci8(n - 1) + Fibonacci8(n - 2);
}

void printFibonacciLessThanM(int m) {
    int i = 1;
    int fib = Fibonacci8(i);
    while (fib < m) {
        printf("%d ", fib);
        i++;
        fib = Fibonacci8(i);
    }
    printf("\n");
}

void bai8() {
    int m;
    printf("Nhập giá trị m: ");
    scanf_s("%d", &m);
    printf("Dãy số Fibonacci có giá trị nhỏ hơn %d là:\n", m);
    printFibonacciLessThanM(m);

	return;
}