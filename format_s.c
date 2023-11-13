#include "main.h"
//check how you handle pointers, int dey return address
int format_s(char *str, va_list args)
{
    str = va_arg(args, char *);
    int len = strlen(str);
    write(1, str, len);
    return len;
}