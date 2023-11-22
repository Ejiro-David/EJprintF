#include "main.h"

int print_f(const char *format, ...)
{
    va_list args;
    int count = 0;
    int printed = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            ++format;
            if (*format == 'c')
            {
                int ch = va_arg(args, int);
                return write(1, &ch, 1);
                count++;
            }
            else if (*format == 's')
            {
                
            }
        }
        else
        {
            count += write(1, format, 1); 
        }
        ++format;
    }

    va_end(args);
    return count;
}

int main()
{
    int num = 123;
    char character = 'A';
    char string[] = "Hello, World!";

    // print_f("Printing an integer: %d\n", num);
    print_f("Printing a character: %c\n", character);
    // print_f("Printing a string: %s\n", string);

    return 0;
}
