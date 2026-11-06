/*
Name:427
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    // 一元二次方程求解：求 ax^2+bx+c=0 的实根
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
        return 0;

    // a 为 0 时方程退化为一次方程，单独处理避免除零
    if (a == 0.0) {
        if (b == 0.0) {
            printf("no\n");          // b、c 同时使方程无解或恒成立，按无实根处理
        } else {
            printf("%.1f\n", -c / b);
        }
        return 0;
    }

    // 判别式决定实根个数：大于 0 有两个不同实根，等于 0 有两个相同实根，小于 0 无实根
    double delta = b * b - 4 * a * c;

    if (delta < 0.0) {
        printf("no\n");
    } else if (delta == 0.0) {
        printf("%.1f\n", -b / (2 * a));
    } else {
        // 求根公式，先输出较大的根
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.1f %.1f\n", x1, x2);
    }

    return 0;
}
