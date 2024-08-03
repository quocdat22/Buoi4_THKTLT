#include "BaiTap.h"

#include<stdio.h>
int An_a(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    if (n == 2)
        return -1;
    return 2 * An_a(n - 1) - 3 * An_a(n - 2) - An_a(n - 3);
}

int An_b(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 3;
    return 2 * An_b(n - 1) + An_b(n - 2) - 3 * An_b(n - 3);
}



void bai4() {

    int n;
    printf("Nhập số thứ tự phần tử n: ");
    scanf_s("%d", &n);
    int result = An_a(n);
    printf("Giá trị phần tử thứ %d của dãy A theo phần a là: %d\n", n, result);

    int result2 = An_b(n);
    printf("Giá trị phần tử thứ %d của dãy A theo phần b là: %d\n", n, result2);

    return;
}