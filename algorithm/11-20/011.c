#include <stdio.h>

// 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

main() {
    char c;
    int letters = 0, space = 0, digit = 0, others = 0;
    printf("请输入一些字符：\n");
    while ((c = getchar()) != '\n') {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            letters++;
        } else if (c == ' ') {
            space++;
        } else if (c >= '0' && c <= '9') {
            digit++;
        } else {
            others++;
        }
    }
    printf("英文字符数量=%d 空格数量=%d 数字数量=%d 其它字符数量=%d\n", letters, space, digit, others);
}