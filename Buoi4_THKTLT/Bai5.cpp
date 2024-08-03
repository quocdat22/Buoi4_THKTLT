#include "BaiTap.h"
#include<stdio.h>
int xn(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (n - i) * xn(i);
    }
    return sum;
}
void bai5() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf_s("%d", &n);
    int result = xn(n);
    printf("Giá trị của x%d là: %d\n", n, result);

    return;
}