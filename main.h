#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);

typedef struct clasification
{
	char *op;
	void (*funct)(va_list, char *, char *, char *, int *);
} clf;

#endif /* MAIN_H*/
