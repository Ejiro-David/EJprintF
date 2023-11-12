#include "main.h"

int format_d(char *buffer, va_list args)
{
    int value = va_arg(args, int);
    int len = sprintf(buffer, "%d", value);
    write(1, buffer, len);
    return len;
}