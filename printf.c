#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: format according to which argument will be printed
 * Return: return numbers of charaters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va-list args;

	if (*format == NULL)
		return (-1);
	
	va_start(args, format);
	
	while (format != '\0')
	{
		if (format != '%')
		{
			write(1, format, 1);
		}
		format++;
	{
	return (count);
}
 
