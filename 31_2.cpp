/*
Name:31_2
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

// 辗转相除法（欧几里得算法）：gcd(a, b) = gcd(b, a % b)，直到 b 为 0
// 由性质 gcd(a, 0) = a 可知，其中一个数为 0 时结果就是另一个数
int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    // 求两个非负整数的最大公约数，题目约定 0 <= a, b < 10000
    int a, b;

    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    // 容错：负数取其绝对值
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // a、b 同时为 0 时没有公约数，gcd 返回 0
    printf("%d\n", gcd(a, b));
    return 0;
}
