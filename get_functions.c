#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * get_op_cases - Function converts numbers to char.
 * Return: Void.
 * @format: Sting being searched for %
 * @i: holds the place in which % was found in the string
 */
void(*get_functions(char *format, int i))(va_list, char *, char *, char *, int*)
{
	int v;
	clf options[] = {
		{"c", _printf-c},
		{"s", _printf-s},
		{"%", _printf-per},
		{NULL, NULL}};
	while(options[v].op != NULL)
	{
		if(options[v].op == format[v])
		{
			return (*options[v].funct);
		}
		v++;
	}
	return (NULL);
}