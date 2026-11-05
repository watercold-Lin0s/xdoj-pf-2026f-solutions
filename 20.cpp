/*
Name:20
Auther:Watercold
Date:2026/10/18
*/

#include <stdio.h>

int main(void) {
    // 四则运算：输入两个整数和一个运算符，输出形如 5%2=1 的结果
    int a, b, c;
    char op;

    if (scanf("%d", &a) != 1)
        return 0;

    // 跳过可能存在的空白字符，取出运算符（+ - * / %）
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n' && c != '\r')
            break;
    }
    if (c == EOF)
        return 0;
    op = (char)c;

    if (scanf("%d", &b) != 1)
        return 0;

    int result = 0;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) return 0;   // 除数不能为零
            result = a / b;
            break;
        case '%':
            if (b == 0) return 0;   // 除数不能为零
            result = a % b;
            break;
        default:
            return 0;
    }

    // 按 5%2=1 的格式输出
    printf("%d%c%d=%d\n", a, op, b, result);
    return 0;
}
