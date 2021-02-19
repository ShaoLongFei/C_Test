#include <stdio.h>

main() {
    int i, num;
    num = 2;
    for (i = 0; i < 3; i++) {
        printf("\40: The num equal %d \n", num);
        num++;
        {
            auto int num = 1;
            printf("\40: The internal block num equal %d \n", num);
            num++;
        }
    }
}