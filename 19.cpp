/*
Name:19
Auther:Watercold
Date:2026/09/20
*/

#include <stdio.h>
int main(void)
{
    // 输入长、宽、高
    float length, width, height;
    float volume;
    printf("请输入长、宽、高：");
    scanf("%f %f %f", &length, &width, &height);

    // 计算体积
    volume = length * width * height;

    // 左对齐，保留 3 位小数
    printf("%-10.3f\n", volume);

    return 0;
}