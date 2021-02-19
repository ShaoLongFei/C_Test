#include <stdio.h>

// 输入和输出

main() {
    // int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。
    // int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。
    int c;
    printf("输入一个字符 :");
    c = getchar();
    printf("你输入的: ");
    putchar(c);
    printf("\n");

    printf("-----------------------------\n");

    // char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
    // int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
    char str[100];
    printf("输入一串字符:");
    gets(str);
    printf("你输入的: ");
    puts(str);

    printf("-----------------------------\n");

    // int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入。
    // int printf(const char *format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出。
    int i;
    printf( "Enter a value :");
    scanf("%s %d", str, &i);
    printf( "\nYou entered: %s %d ", str, i);
    printf("\n");
};