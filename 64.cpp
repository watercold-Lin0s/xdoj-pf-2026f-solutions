/*
Name:64
Auther:Watercold
Date:2026/10/25
*/

#include <stdio.h>

int main(void) {
    // 自然数分解：把 n^3 写成 n 个连续奇数之和
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    // 首项为 n^2 - n + 1 = n(n-1) + 1，之后每项加 2
    // 验证：1^3 = 1；2^3 = 3+5；3^3 = 7+9+11；4^3 = 13+15+17+19
    int start = n * n - n + 1;

    for (int i = 0; i < n; i++) {
        if (i > 0)
            putchar(' ');
        printf("%d", start + 2 * i);
    }
    putchar('\n');

    return 0;
}
