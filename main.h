#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void(*get_functions(char *format, int i))(va_list, char *, char *, char *, int*);
void _printf_c(va_list arg, char *buffer, char *strtmp, char *tmp, int *indj);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void _printf_s(va_list arguments, char *buffer, char *strtmp, char *tmp,int *j);

typedef struct clasification
{
	char *op;
	void (*funct)(va_list, char *, char *, char *, int *);
} clf;

#endif /* MAIN_H*/
