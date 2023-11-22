# myprintf
%d or %i: Used to print integers
%s: Used to print strings
%f: Used to print floating point numbers
%c: Used to print characters
%x or %X: Used to print hexadecimal numbers
%p: Used to print pointers
%%: Used to print the % character -- done 


Test for main funct

double pi = 3.14;
    print_f("The value of pi is %.2f.\n", pi);
    // Print a date and time.
    print_f("%s %s\n", "Today is", __DATE__);
    print_f("%s %s\n", "The time is", __TIME__);

    // Print a list of numbers.
    int numbers[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        print_f("%d\n", numbers[i]);
    }

    // Print a table of data.
    print_f("| Name | Age | Occupation |\n");
    print_f("| Snehasish | 25 | AI Engineer |\n");
    print_f("| Alice | 30 | Software Engineer |\n");



Former print_f:

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

 // if (*format == '%')
            // {
            // }
            // else if (*format == 'c')
            // {
            //     // format_c must return an int.
            //     count += format_c(buffer, buff_ind, args);
            //     // funtions takes buffer arr, current ind of buffer and list of args
            // }
            // else if (*format == 's')
            // {
            //     char *str = va_arg(args, char *);
            //     while (*str)
            //     {
            //         buffer[buff_ind++] = *str;
            //         str++;
            //         if (buff_ind == BUFF_SIZE)
            //         {
            //             print_buffer(buffer, &buff_ind);
            //             count += buff_ind;
            //         }
            //     }
            // }
            // else if (*format == 'd' || *format == 'i')
            // {
            //     int value = va_arg(args, int);
            //     printed = print_integer(value);
            //     count += printed;
            // }