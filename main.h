#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>

#undef BUFFER_SIZE
#define BUFFER_SIZE 1024


/*Red-Rim and Hasu naj*/

/*---Prototypes---*/
int _printf(const char *format, ...);
int printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int check_format(va_list list, const char *s);
int _putstr(char *str);
int _int_printf(const char *format, ...);
int print_binary(unsigned int n);
int rev_str(char *s);

#endif /*:)*/
