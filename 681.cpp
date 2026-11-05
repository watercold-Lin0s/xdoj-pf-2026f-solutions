/*
Name:681
Auther:Watercold
Date:2026/10/30
*/

#include <stdio.h>

int main()
{
    //接收信号长度和信号序列
    int n, x[30];

    //读取长度，若输入不合法则返回
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0 || n > 30) return 0;

    //读取n个整数
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &x[i]) != 1) return 0;
    }

    //依次检查每个位置是否开始出现模式 3 5 7
    int count = 0;
    for (int i = 0; i + 2 < n; i++) {
        if (x[i] == 3 && x[i + 1] == 5 && x[i + 2] == 7)
            count++;
    }

    //输出模式出现的次数
    printf("%d\n", count);
    return 0;
}
