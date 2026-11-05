/*
Name:7
Auther:Watercold
Date:2026/10/18
*/

#include <stdio.h>

int main(void) {
    // 车牌限行：输入三个整数，依次为星期几(1~7)、雾霾指数(0~600)、车牌号
    int day, haze, plate;

    if (scanf("%d %d %d", &day, &haze, &plate) != 3)
        return 0;

    // 车牌最后一位数字，以及是否限行
    int last = plate % 10;
    int restricted = 0;

    // 只有周一至周五限行，周六、周日不限行
    if (day >= 1 && day <= 5) {
        // 雾霾指数小于 200 时不限行
        if (haze < 200) {
            restricted = 0;
        } else if (haze < 400) {
            // 指数在 200~400 之间时每天限两个尾号
            // 周一 1,6  周二 2,7  周三 3,8  周四 4,9  周五 5,0
            int pair1 = day;
            int pair2 = (day + 5) % 10;
            restricted = (last == pair1 || last == pair2);
        } else {
            // 指数不小于 400 时每天限五个尾号
            // 周一、三、五限奇数尾号，周二、四限偶数尾号
            int isOdd = last % 2;
            if (day == 1 || day == 3 || day == 5)
                restricted = isOdd;
            else
                restricted = !isOdd;
        }
    }

    // 输出车牌最后一位数字和限行情况(yes/no)
    printf("%d %s\n", last, restricted ? "yes" : "no");
    return 0;
}
