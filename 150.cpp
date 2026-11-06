/*
Name:150
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

// 分段函数：x<1 时 y=x-1；1<=x<10 时 y=2x-1；x>=10 时 y=3x+11
int f(int x) {
    if (x < 1)
        return x - 1;
    if (x < 10)
        return 2 * x - 1;
    return 3 * x + 11;
}

int main(void) {
    // 输入自变量 x（整数），输出对应的函数值
    int x;

    if (scanf("%d", &x) != 1)
        return 0;

    printf("%d\n", f(x));
    return 0;
}
