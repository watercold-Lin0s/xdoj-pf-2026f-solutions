/*
Name:迭代法求根(1)
Auther:Watercold
Date:2026/10/28
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // 输入一个浮点数 a，用迭代法求 a 的平方根
    double a;

    // 读取输入，如果输入不符合要求则直接返回
    if (scanf("%lf", &a) != 1) return 0;

    // 非正数没有实数平方根（a == 0 时结果就是 0）
    if (a <= 0.0) {
        printf("0.00000\n");
        return 0;
    }

    // 迭代公式：x(n+1) = (x(n) + a / x(n)) / 2
    // 初值取 a / 2，前后两次结果之差的绝对值小于 1e-5 时停止
    double x = a / 2.0;
    double next = (x + a / x) / 2.0;

    while (fabs(next - x) >= 1e-5) {
        x = next;
        next = (x + a / x) / 2.0;
    }

    // 保留小数点后 5 位
    printf("%.5f\n", next);

    return 0;
}
