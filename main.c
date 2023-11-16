#include "main.h"

int print_f(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int len;
    int count = -1;
    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            count++;
        }
        else
        {
            format++;
            while (*format)
            {
                if (*format == 'd' || *format == 'i')
                {
                    char buffer[12];
                    count += format_d(buffer, args);
                    break;
                }
                else if (*format == 's')
                {
                    count += format_s(args);
                    break;
                }
                else if (*format == 'f')
                {
                    char buffer[12];
                    count += format_d(buffer, args);
                    break;
                }
                else
                {
                    write(1, format, 1);
                    count++;
                    break;
                }
            }
        }
        format++;
    }

    va_end(args);
    return count + 1;
}

int main(void)
{
    int age = 25;
    print_f("%s %d", "l", 34);
    // print_f("My name is %d and I am %s.\n", age, "Snehasish");
}