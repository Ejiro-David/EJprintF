#include "main.h"

int print_f(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    while (*format != '\0')
    {
        if (*format != '%')
        {
            putchar(*format);
            count++;
        }
        else
        {

            while (*format)
            {
                if (*format == 'c')
                {
                    int ch = va_arg(args, int);
                    putchar(ch);
                    count++;
                }
                else if (*format == 's')
                {
                    char *str = va_arg(args, char *);
                    while (*str)
                    {
                        putchar(*str);
                        str++;
                        count++;
                    }
                }
                else
                {
                    putchar(*format);
                    count++;
                }
            }
            format++;
        }
        va_end(args);
    }
    return count;
}

int main(void)
{
    int age = 25;
    print_f("My name is %s and I am %d years old.\n %%", "Snehasish", age);
}