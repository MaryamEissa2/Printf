#include "main.h"

/**
 * print_hex - prints unsigned hex numbers in lowercase
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_hex(va_list ap, params_t *params)
{
	unsigned long lon;
	int c = 0;
	char *str;

	if (params->l_modifier)
		lon = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		lon = (unsigned short int)va_arg(ap, unsigned int);
	else
		lon = (unsigned int)va_arg(ap, unsigned int);

	str = convert(lon, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && lon)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
 * print_HEX - prints unsigned hex numbers in uppercase
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_HEX(va_list ap, params_t *params)
{
	unsigned long lon;
	int c = 0;
	char *str;

	if (params->l_modifier)
		lon = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		lon = (unsigned short int)va_arg(ap, unsigned int);
	else
		lon = (unsigned int)va_arg(ap, unsigned int);

	str = convert(lon, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && lon)
	{
		*--str = 'X';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}
/**
 * print_binary - prints unsigned binary number
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_binary(va_list ap, params_t *params)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hashtag_flag && num)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
 * print_octal - prints unsigned octal numbers
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_octal(va_list ap, params_t *params)
{
	unsigned long lon;
	char *str;
	int c = 0;

	if (params->l_modifier)
		lon = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		lon = (unsigned short int)va_arg(ap, unsigned int);
	else
		lon = (unsigned int)va_arg(ap, unsigned int);
	str = convert(lon, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && lon)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}
