#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function to print my printf of "c" "s" and "c"
 * @format: getting the  my printf arguement
 * Return: the format specifier if found true
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int flag = 0;
	va_list args;

	va_start(args, format);

while (format[i])
{
while (format[i] == '%')
	{
	switch (format[i + 1])
	{
		case 'c':
			flag += print_char(args);
				i += 2;
			break;
			case 's':
				flag += print_string(args);
				i += 2;
				break;
			case '%':
				_putchar('%');
				flag++;
				i += 2;
			break;
			default:
				_putchar(format[i]);
				_putchar(format[i + 1]);
				i += 2;
		}
		}
	if (format[i])
	{
	_putchar(format[i]);
	flag++;
	}
i++;
}
va_end(args);
return (flag);
}
