#include "main.h"
#include <stdio.h>
/**
 * _puts - Outputting a srting
 * print_string - return the value of string with va_args
 * from the standard output
 * @str: String from Main file
 * Return: Always success
 * Description - A program to get the number of string and print the string
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	return (i);
}
/**
 * print_string - call puts func
 * @args: variadic variable
 * Return: _puts
 */
int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
