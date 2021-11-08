#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void(*get_functions(char *format, int i))(va_list, char *, char *, char *, int*);
void _printf_c(va_list arg, char *buffer, char *strtmp, char *tmp, int *indj);

typedef struct clasification
{
	char *op;
	void (*funct)(va_list, char *, char *, char *, int *);
} clf;

#endif /* MAIN_H*/
