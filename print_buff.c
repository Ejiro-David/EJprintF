#include "main.h"

void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0)
    {
        for (int i = 0; i < *buff_ind; i++)
        {
            putchar(buffer[i]);
        }
    }

    *buff_ind = 0;
}