/*
Name:125
Auther:Watercold
Date:2026/09/28
*/

#include <stdio.h>
#include <math.h>

int main()
{ 
    //输入利率和年数
    double r, n;

    //读取输入，如果输入不符合要求则直接返回
    if (scanf("%lf %lf", &r, &n) != 2) return 0;

    //计算复利公式
    double p = pow(1.0 + r, n);

    //输出结果，保留两位小数
    printf("%.2f\n", p);
    return 0;
}