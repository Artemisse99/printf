#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf_c - print characters
 * @arguments: gjhgkj
 * @buffer: jhvjhjh
 * @strmp: hikjhojh
 */
void _printf_c(va_list arg, char *buffer, char *strtmp, char *tmp,
		  int *indj)
{
	arg = arg;
	strtmp = strtmp;
	tmp = tmp;

	buffer[*indj] = (char)va_arg(arg, int);
}


/**
 * _printf_s - Function pointed to to assist in print a string
 * Return: Void.
 * @arg: Variadic arguements
 * @buffer: Array in which what is to be printed is allocated
 * @tmp: Array to hold values temporarily
 * @strtmp: Pointer to hold values temporarily
 * @j: Index that holds the position on buffer
 */
void _printf_s(va_list arg, char *buffer, char *strtmp, char *tmp,
int *indj)
{
	tmp = tmp;

	strtmp = va_arg(arg, char *);
	if (strtmp == (char *)0)
	{
		strtmp = "(null)";
	}
	if (*strtmp == '\0')
	{
		(*indj)--;
	}
	else
	{
		_strcpy(&buffer[*indj], strtmp);
		*indj = *indj + _strlen(strtmp);
	}
}
