/*
Name:389
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

// 试除法判断 x 是否为质数：只需检查 2 到 sqrt(x) 之间的因数
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
    // 求第 a 个质数到第 b 个质数的和，a、b 互异且都小于 200
    int a, b;

    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    // 题目保证 a、b 互异，若 a > b 则交换，保证求和区间从小到大
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    // 第 200 个质数是 1223，把上界放到 1300 足够覆盖
    int primes[205];
    int total = 0;

    for (int x = 2; total < b && x < 1300; x++) {
        if (isPrime(x)) {
            total++;                 // 已找到的质数个数，也就是 x 的序号
            primes[total] = x;
        }
    }

    // 把第 a 个到第 b 个质数累加起来
    long long sum = 0;
    for (int i = a; i <= b; i++)
        sum += primes[i];

    printf("%lld\n", sum);
    return 0;
}
