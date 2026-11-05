/*
Name:9
Auther:Watercold
Date:2026/09/20
*/

#include <stdio.h>
int main(void)
{
    int d_iron, d_gold;
    const double PI = 3.1415926;
    const double IRON_DENSITY = 7.86;
    const double GOLD_DENSITY = 19.3;

    scanf("%d %d", &d_iron, &d_gold);

    // 直径由毫米转换为厘米
    double iron_d = d_iron / 10.0;
    double gold_d = d_gold / 10.0;

    //直径与半径的关系
    double iron_r = iron_d / 2.0;
    double gold_r = gold_d / 2.0;

    //体积公式为V=4/3*π*r^3
    double iron_volume = 4.0 / 3.0 * PI * iron_r * iron_r * iron_r;
    double gold_volume = 4.0 / 3.0 * PI * gold_r * gold_r * gold_r;

    //质量=体积*密度
    double iron_mass = iron_volume * IRON_DENSITY;
    double gold_mass = gold_volume * GOLD_DENSITY;

    //输出结果，保留三位小数
    printf("%.3f %.3f\n", iron_mass, gold_mass);

    return 0;
}