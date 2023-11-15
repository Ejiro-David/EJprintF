#include "main.h"

int print_f(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int len;
    int count = 0;
    while (*format != '\0')
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
                if (*format == 'd')
                {
                    char buffer[12];
                    count += format_d(buffer, args);
                    break;
                }
                else if (*format == 's')
                {
                    char buffer[256];
                    count += format_s(buffer, args);
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
    return count;
}

int main(void)
{
    int age = 25;
    print_f("My name is %d and I am %s years old.\n %%", age, "Snehasish");
}