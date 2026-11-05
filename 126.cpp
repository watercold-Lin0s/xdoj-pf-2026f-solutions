/*
Name:126
Auther:Watercold
Date:2026/09/28
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    //输入贷款总额、每月还款额和月利率
    double d, P, r;

    // 读取输入，如果输入不符合要求则直接返回
    if (scanf("%lf %lf %lf", &d, &P, &r) != 3) return 0;

    // 计算还款月数
    double m;
    if (r == 0.0) {
        if (P <= 0.0) {
            printf("0.00\n");
            return 0;
        }
        m = d / P;
    } else {
        if (P <= d * r) {
            // 每月还款不足以支付当月利息，无法偿清，按 0.00 处理
            printf("0.00\n");
            return 0;
        }
        m = log(P / (P - d * r)) / log(1.0 + r);
    }

    printf("%.2f\n", m);
    return 0;
}