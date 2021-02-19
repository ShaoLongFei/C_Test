#include <stdio.h>

#define MAX
#define MAXIMUM(x, y) x>y?x:y
#define MINIMUM(x, y) x>y?y:x

// #if #ifdef和#ifndef的综合应用。

void main() {
    int a = 10, b = 20;
#ifdef MAX
    printf("The larger one is %d\n", MAXIMUM(a, b));
#else
    printf("The lower one is %d\n",MINIMUM(a,b));
#endif
#ifndef MIN
    printf("The lower one is %d\n", MINIMUM(a, b));
#else
    printf("The larger one is %d\n",MAXIMUM(a,b));
#endif
#undef MAX
#ifdef MAX
    printf("The larger one is %d\n",MAXIMUM(a,b));
#else
    printf("The lower one is %d\n", MINIMUM(a, b));
#endif
#define MIN
#ifndef MIN
    printf("The lower one is %d\n",MINIMUM(a,b));
#else
    printf("The larger one is %d\n", MAXIMUM(a, b));
#endif
}