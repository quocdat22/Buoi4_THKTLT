#include<stdio.h>
#include"BaiTap.h"
#include <math.h>

int sum_recursive(int n) {
    // Trường hợp cơ sở
    if (n == 1) {
        return 1;
    }
    // Trường hợp đệ quy
    return n + sum_recursive(n - 1);
}

int sum_iterative(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

double sum_recursive2(int n) {
    // Trường hợp cơ sở
    if (n == 1) {
        return sqrt(5);
    }
    // Trường hợp đệ quy
    return sqrt(5) + sum_recursive(n - 1);
}
double sum_iterative2(int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += sqrt(5);
    }
    return total;
}

double S_recursive(int n) {
    if (n == 1) {
        return 1.0 / 2;
    }
    else {
        return (double)n / (n + 1) + S_recursive(n - 1);
    }
}
double S_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

double S_recursive14(int n) {
    if (n == 0) {
        return 1.0;
    }
    else {
        return 1.0 / (2 * n + 1) + S_recursive(n - 1);
    }
}
double S_iterative14(int n) {
    double sum = 1.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

// Recursive function to calculate S(n)
int S_recursive15(int n) {
    if (n == 1) {
        return 1 * 2;
    }
    else {
        return n * (n + 1) + S_recursive(n - 1);
    }
}
int S_iterative15(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}

void inputN(int& n) {
	printf("Enter the value of n: ");
	scanf_s("%d", &n);
}

// Function to calculate factorial
long long factorial1(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial1(n - 1);
    }
}
// Recursive function to calculate S(n)
double S_recursive16(int n) {
    if (n == 1) {
        return (1.0 * factorial1(2)) / (2 + sqrt(3));
    }
    else {
        return (n * factorial1(n + 1)) / ((n + 1) + sqrt(n + 2)) + S_recursive(n - 1);
    }
}

// Function to calculate factorial
long long factorial2(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Iterative function to calculate S(n)
double S_iterative16(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (i * factorial2(i + 1)) / ((i + 1) + sqrt(i + 2));
    }
    return sum;
}


void bai1(){
    /*int n = 26; 
    printf("Tổng với %d dấu căn là %.2f\n", n, sum_iterative2(n));*/

    int n;
    inputN(n);

    double result = S_iterative16(n);
    printf("S(%d) = %lf\n", n, result);


    return;
}