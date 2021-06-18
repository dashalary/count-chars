#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
    printf("%d \n", stringLength("stringLength testing"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("another test"));

    return 0;
}

int stringLength(const char *string)
{
    const char *lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}