#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFF_SIZE 1024 

int print_f(const char *format, ...);
int print_integer(int value);
void print_buffer(char buffer[], int *buff_ind);
int format_c(char buffer[], int buff_ind, va_list args);

#endif
