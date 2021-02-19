#include <stdio.h>

// 枚举

// 没有指定值的枚举元素，其值为前一元素加 1，从 0 开始
enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

// 以下枚举类型不连续，这种枚举无法遍历
enum NUMS {
    ENUM_0, ENUM_10 = 10, ENUM_11
} num;

int main() {
    enum DAY day;
    day = WED;
    printf("%d\n", day);

    // 遍历枚举元素
    for (day = MON; day <= SUN; day++) {
        printf("枚举元素：%d \n", day);
    }

    printf("------------------------------\n");

    printf("%d\n", num);
    printf("%d,%d,%d\n", ENUM_0, ENUM_10, ENUM_11);
    int a = 10;
    num = (enum NUMS) a;
    printf("%d", num);
    return 0;
}