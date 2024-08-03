#include "BaiTap.h"

#include<stdio.h>
int countDigits(int n) {
    if (n < 10)
        return 1;
    return 1 + countDigits(n / 10);
}

void bai6() {
    int n;
    printf("Nhập một số nguyên dương: ");
    scanf_s("%d", &n);
    int result = countDigits(n);
    printf("Số lượng chữ số của %d là: %d\n", n, result);

	return;
}