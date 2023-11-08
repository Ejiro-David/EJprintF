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
            switch (*++format)
            {
            case 'd':
                count += fprintf(stdout, "%d", va_arg(args, int));
            // case 'c':
            //     count += fprintf(stdout, "%c", va_arg(args, char));
            case 's':
                count += fprintf(stdout, "%s", va_arg(args, char *));
            case 'f':
                count += fprintf(stdout, "%f", va_arg(args, double));
            default:
                putchar('%');
                putchar(*format);
                count += 2;
                break;
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
    print_f("My name is %s and I am %d years old.\n", "Snehasish", age);
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
}