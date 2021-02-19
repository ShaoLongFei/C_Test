#include <stdio.h>

// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
// 程序分析：利用辗除法。

main() {
    int a, b, num1, num2, temp;
    printf("请输入两个数，用空格隔开:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    a = num1;
    b = num2;
    while (b != 0) { /*利用辗除法，直到b为0为止*/
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("最大公约数:%d\n", a);
    printf("最小公倍数:%d\n", num1 * num2 / a);
}