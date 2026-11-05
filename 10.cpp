/*
Name:10
Auther:Watercold
Date:2026/09/20
*/

#include <stdio.h>
int main(void)
{
    // 输入华氏温度
    int fahrenheit;
    scanf("%d", &fahrenheit);

    // 华氏温度转换为摄氏温度公式
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // 输出摄氏温度，保留两位小数
    printf("%.2f\n", celsius);
    
    return 0;
}