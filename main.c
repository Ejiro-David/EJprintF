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
            write(1, format, 1);
            count++;
        }
        else
        {
            while (*++format)
            {
                if (*format == 'd')
                {
                    int value = va_arg(args, int);
                    char buffer[12];
                    int len = sprintf(buffer, "%d", value);
                    write(1, buffer, len);
                    count += len;
                    break;
                }
                else if (*format == 's')
                {
                    char *str = va_arg(args, char *);
                    int len = strlen(str);
                    write(1, str, len);
                    count+=len;
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
    print_f("My name is %s and I am %d years old.\n %%", "Snehasish", age);
}