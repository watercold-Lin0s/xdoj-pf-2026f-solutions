/*
Name:298
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

int main(void) {
    // 和差平方与平方和差：求 (a+b)^2、(a-b)^2、a^2+b^2、a^2-b^2
    // 四个值中的最大值和最小值
    long long a, b;

    if (scanf("%lld %lld", &a, &b) != 2)
        return 0;

    // 题目约定 4 <= a, b < 1000，越界则直接返回
    if (a < 4 || a >= 1000 || b < 4 || b >= 1000)
        return 0;

    long long v1 = (a + b) * (a + b);   // (a+b)^2
    long long v2 = (a - b) * (a - b);   // (a-b)^2，平方后一定非负
    long long v3 = a * a + b * b;       // a^2+b^2
    long long v4 = a * a - b * b;       // a^2-b^2，b 比 a 大时为负数

    // 先用第一个值同时作为最大值和最小值的初值，再逐个比较
    long long vals[3] = {v2, v3, v4};
    long long max = v1, min = v1;

    for (int i = 0; i < 3; i++) {
        if (vals[i] > max) max = vals[i];
        if (vals[i] < min) min = vals[i];
    }

    printf("%lld %lld\n", max, min);
    return 0;
}
