#include "BaiTap.h"
#include<stdio.h>

int UCLN(int a, int b) {
    if (a == b)
        return a;
    if (a > b)
        return UCLN(a - b, b);
    else
        return UCLN(a, b - a);
}


void nhapAB(int &a, int &b) {
    
	printf("Nhap a: ");
	scanf_s("%d", &a);
	printf("Nhap b: ");
	scanf_s("%d", &b);
	
	return;
}
void bai2() {
    int a, b;
    nhapAB(a, b);
    int result = UCLN(a, b);
    printf("Ước chung lớn nhất của %d và %d là: %d\n", a, b, result);

	return;
}