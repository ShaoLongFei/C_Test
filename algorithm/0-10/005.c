#include <stdio.h>

// 题目：输入三个整数x,y,z，请把这三个数由小到大输出。

main() {
    int x, y, z, t;
    printf("请随意输入三个数，用空格隔开");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) { /*交换x,y的值*/
        t = x;
        x = y;
        y = t;
    }
    if (x > z) { /*交换x,z的值*/
        t = z;
        z = x;
        x = t;
    }
    if (y > z) { /*交换z,y的值*/
        t = y;
        y = z;
        z = t;
    }
    printf("small to big: %d %d %d\n", x, y, z);
}