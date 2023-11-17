#include "main.h"

int print_integer(int value)
{
    char buffer[32];
    int printed = snprintf(buffer, sizeof(buffer), "%d", value);

    for (int i = 0; i < printed; i++)
    {
        putchar(buffer[i]);
    }
    return printed;
}