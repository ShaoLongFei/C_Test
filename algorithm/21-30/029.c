#include <libc.h>
#include "stdio.h"
#include "time.h"

void main() {
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("当前本地时间为: %s", asctime(timeinfo));

    printf("-----------------------------\n");

    time_t start, end;
    int i;
    start = time(NULL);
    for (i = 0; i < 5; i++) {
        sleep(1);
    }
    end = time(NULL);
    // 输出执行时间
    printf("\n时间间隔为 %6.3f\n", difftime(end, start));
}