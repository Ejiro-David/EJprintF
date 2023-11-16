// #include "main.h"

// int format_d(char *buffer, va_list args)
// {
//     va_list args_copy;
//     va_copy(args_copy, args);

//     int value = va_arg(args_copy, int);

//     int len = sprintf(buffer, "%d", value);
//     write(1, buffer, len);

//     va_end(args_copy);
//     return len;
// }