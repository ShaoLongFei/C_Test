#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 指针练习，C 的核心

void getSeconds(unsigned long *par);

int *getRandom();

main() {
    int value = 10;
    int *p;
    p = &value;
    printf("value 变量的值：%d\n", value);
    printf("value 变量的地址： %p\n", &value);
    printf("p 变量保存的地址：%p\n", p);
    printf("*p 变量的值：%d\n", *p);
    p = NULL;
    printf("p 赋值 NULL 后\n");
    printf("p 变量保存的地址：%p\n", p);
    // printf("*p 变量的值：%d\n", *p);  /* 这么做会 error */
    if (p) {
        printf("p 非 NULL\n");
    } else {
        printf("p 是 NULL\n");
    }

    printf("-------------指针运算------------------\n");

    const int MAX = 3;
    int var[] = {10, 100, 200};
    int *ptr;
    ptr = var;
    // 指针移动
    for (int i = 0; i < MAX; ++i) {
        printf("存储地址：var[%d] = %p\n", i, ptr);
        printf("存储值：var[%d] = %d\n", i, *ptr);
        ptr++;
    }
    // 指针比较
    ptr = var;
    while (ptr <= &var[MAX - 1]) {
        printf("存储地址：%p  存储值：%d\n", ptr, *ptr);
        ptr++;
    }

    printf("----------------指针数组---------------------\n");

    int *ptrs[MAX];
    for (int i = 0; i < MAX; i++) {
        ptrs[i] = &var[i];
    }
    for (int i = 0; i < MAX; i++) {
        printf("var[%d] = %d\n", i, *ptrs[i]);
    }
    const char *names[] = {
            "xiao hong",
            "xiao lv",
            "xiao zi"
    };
    for (int i = 0; i < MAX; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    printf("-------------二级指针--------------\n");

    int V = 100;
    int *ptr1;
    int **ptr2;
    ptr1 = &V;
    ptr2 = &ptr1;
    printf("V = %d\n", V);
    printf("ptr1 = %p\n", ptr1);
    printf("*ptr1 = %d\n", *ptr1);
    printf("ptr2 = %p\n", ptr2);
    printf("**ptr2 = %d\n", **ptr2); /* 如果不赋值就打印，会有错 */

    printf("--------------传递指针给函数--------------\n");

    unsigned long sec;
    getSeconds(&sec);
    printf("当前时间：%ld\n", sec);

    printf("-------------从函数返回指针--------------\n");

    int *ptr3;
    ptr3 = getRandom();
    for (int i = 0; i < 10; i++) {
        printf("*(ptr3+[%d]):%d\n", i, *(ptr3 + i));
    }
}

int *getRandom() {
    static int r[10];
    int i;
    srand((unsigned) time(NULL));
    for (i = 0; i < 10; i++) {
        r[i] = rand();
        printf("%d\n", r[i]);
    }
    return r;
}

void getSeconds(unsigned long *par) {
    *par = time(NULL);
}