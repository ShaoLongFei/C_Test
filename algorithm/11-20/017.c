#include <stdio.h>
#include <string.h>

// 共用体

// Data 类型的变量可以存储一个整数、一个浮点数，或者一个字符串。
// 这意味着一个变量（相同的内存位置）可以存储多个多种类型的数据。
// 可以根据需要在一个共用体内使用任何内置的或者自定义的数据类型。
// 共用体占用的内存应足够存储共用体中最大的成员。
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    printf("共用体所占大小 : %ld\n", sizeof(data));

    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    // 可以看到共用体的 i 和 f 成员的值有损坏
    // 因为最后赋给变量的值占用了内存位置
    // 这也是 str 成员能够完好输出的原因
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
    return 0;
}