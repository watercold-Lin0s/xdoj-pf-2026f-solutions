/*
Name:28_2
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

// 判断闰年：能被 400 整除，或能被 4 整除但不能被 100 整除
int isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main(void) {
    // 输入年份 a 和月份 b，计算该月有多少天
    int year, month;

    if (scanf("%d %d", &year, &month) != 2)
        return 0;

    // 题目约定年份在 [1900, 2030]、月份在 [1, 12]，越界则直接返回
    if (year < 1900 || year > 2030)
        return 0;
    if (month < 1 || month > 12)
        return 0;

    // 1,3,5,7,8,10,12 月 31 天；4,6,9,11 月 30 天；
    // 闰年 2 月 29 天，平年 2 月 28 天
    int days;
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = isLeapYear(year) ? 29 : 28;
            break;
        default:
            return 0;
    }

    printf("%d\n", days);
    return 0;
}
