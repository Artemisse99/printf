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
