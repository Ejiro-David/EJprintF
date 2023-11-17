#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFF_SIZE 1024 
//The ; is not part of this syntax because it's not a statement within the program; it's a directive to the preprocessor. 
// Including a semicolon at the end of a #define directive would result in a syntax error.

int print_f(const char *format, ...);
int print_integer(int value);
void print_buffer(char buffer[], int *buff_ind);

// int format_d(char *buffer, va_list args);
// int format_s(va_list args);

#endif