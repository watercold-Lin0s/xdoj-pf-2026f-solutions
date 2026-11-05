/*
Name:52
Auther:Watercold
Date:2026/10/18
*/

#include <stdio.h>

int main(void) {
    // 字符处理：小写字母转大写，大写字母转小写，其他字符原样输出
    int c;

    c = getchar();
    if (c == EOF)
        return 0;

    if (c >= 'a' && c <= 'z')
        c = c - 'a' + 'A';
    else if (c >= 'A' && c <= 'Z')
        c = c - 'A' + 'a';

    putchar(c);
    putchar('\n');
    return 0;
}
