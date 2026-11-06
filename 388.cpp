/*
Name:388
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

int main(void) {
    // 输入 5 个以空格间隔的字符，统计其中字符 a 的个数，大写 A 也算
    int count = 0;

    // %c 前的空格用于跳过字符之间的分隔符和换行
    for (int i = 0; i < 5; i++) {
        char c;
        if (scanf(" %c", &c) != 1)
            break;

        if (c == 'a' || c == 'A')
            count++;
    }

    printf("%d\n", count);
    return 0;
}
