#include <stdio.h>

// 结构体

struct student {
    char name[50];
    int roll;
    float marks;
} s;

main() {
    printf("输入信息：\n");
    printf("名字：");
    scanf("%s", s.name);
    printf("编号：");
    scanf("%d", &s.roll);
    printf("成绩：");
    scanf("%f", &s.marks);

    printf("显示信息：\n");
    printf("名字：%s", s.name);
    printf("编号：%d\n", s.roll);
    printf("成绩：%.1f\n", s.marks);
};