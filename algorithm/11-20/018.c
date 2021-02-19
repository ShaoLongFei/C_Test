#include <stdio.h>
#include <stdlib.h>

// 函数指针与回调函数
// 函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。
// 简单讲：回调函数是由别人的函数执行时调用你实现的函数。

int max(int x, int y) {
    return x > y ? x : y;
}

// 回调函数
void populate_array(int array[], int arraySize, int (*getNextValue)(void)) {
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// 获取随机值
int getNextRandomValue(void) {
    return rand();
}

int main(void) {
    /* p 是函数指针 */
    int (*p)(int, int) = &max; // &可以省略
    int a, b, c, d;

    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = p(p(a, b), c);

    printf("最大的数字是: %d\n", d);

    printf("-------------------------------\n");

    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    return 0;
}
