#include "main.h"

int format_c(char buffer[], int buff_ind, va_list args)
{
    //try init args list on main.c
    int ch = va_arg(args, int); // continue line by line analysis
    buffer[buff_ind++] = ch;
    int len;
    //code compiles but without printing char when tested
    if (BUFF_SIZE == buff_ind)
    {
        print_buffer(buffer, &buff_ind);
        len = buff_ind;
    }
    return len;
}