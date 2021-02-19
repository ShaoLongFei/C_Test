#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define SQ(x) x*x
/*宏定义中允许包含两道命令的情形，此时必须在最右边加上"\"*/
#define exchange(a, b){\
    int t;\
    t = a;\
    a = b;\
    b = t;\
}
#define LAG >
#define SMA <
#define EQ ==

// #define 练习

void main() {
    int num;
    int again = 1;
    printf("\40: Program will stop if input value less than 50.\n");
    while (again) {
        printf("Please input number ==>");
        scanf("%d", &num);
        printf("The square for this number is %d \n", SQ(num));
        if (num >= 50)
            again = TRUE;
        else
            again = FALSE;
    }

    printf("-------------------------------\n");

    int x = 10;
    int y = 20;
    printf("x=%d; y=%d\n", x, y);
    exchange(x, y);
    printf("x=%d; y=%d\n", x, y);

    printf("-------------------------------\n");

    int i = 10;
    int j = 20;
    if (i LAG j)
        printf("%d larger than %d \n", i, j);
    else if (i EQ j)
        printf("%d equal to %d \n", i, j);
    else if (i SMA j)
        printf("%d smaller than %d \n", i, j);
    else
        printf("No such value.\n");
}