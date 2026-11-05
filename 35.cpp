/*
Name:35
Auther:Watercold
Date:2026/10/25
*/

#include <stdio.h>

// 判断 x 是否为素数
int isPrime(int x) {
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    // 哥德巴赫猜想：把正偶数 n 分解为两个素数之和
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    // p 从 2 递增到 n/2，找到的第一组 (p, n-p) 中 p 最小、n-p 最大
    for (int p = 2; p <= n / 2; p++) {
        if (isPrime(p) && isPrime(n - p)) {
            printf("%d %d\n", p, n - p);
            break;
        }
    }

    return 0;
}
