/*
Name:634
Auther:Watercold
Date:2026/10/30
*/

#include <stdio.h>

int main()
{
    //读取输入的三位数
    int n;

    if (scanf("%d", &n) != 1) return 0;

    //不是三位数，输出-1并返回
    if (n < 100 || n > 999) {
        printf("-1\n");
        return 0;
    }

    //取出百位、十位、个位
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;

    //各位数字的3次幂之和等于自身，则是水仙花数
    if (a * a * a + b * b * b + c * c * c == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
