#include<stdio.h>
#include"BaiTap.h"

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





void bai1(){
    int n = 5; // Bạn có thể thay đổi giá trị n để kiểm tra
    printf("Tổng từ 1 đến %d là %d\n", n, sum_iterative(n));

    return;
}