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
int _putchar(char c);
int check_format(va_list list, const char *s);
int _putstr(char *s);

#endif /*MAIN_H*/
