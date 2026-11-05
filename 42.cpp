/*
Name:42
Auther:Watercold
Date:2026/10/18
*/

#include <stdio.h>

int main(void) {
    // 整除判断：输入两个正整数 a、b
    int a, b;

    if (scanf("%d %d", &a, &b) != 2)
        return 0;
    if (b == 0)
        return 0;

    // a 能被 b 整除输出 yes，否则输出商和余数
    if (a % b == 0)
        printf("yes\n");
    else
        printf("%d %d\n", a / b, a % b);

    return 0;
}
