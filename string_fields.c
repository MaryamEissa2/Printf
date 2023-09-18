#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 312d7c07216ff0a01745273a1bc9d83e0deda19e
/**
 * get_precision - gets the precision from the format string
 * @p: the format string
 * @params: the parameters struct
 * @ap: the argument pointer
<<<<<<< HEAD
 * Return: new pointer
 */

=======
 *
 * Return: new pointer
 */
>>>>>>> 312d7c07216ff0a01745273a1bc9d83e0deda19e
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
<<<<<<< HEAD

=======
>>>>>>> 312d7c07216ff0a01745273a1bc9d83e0deda19e
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
}
<<<<<<< HEAD
=======

>>>>>>> 312d7c07216ff0a01745273a1bc9d83e0deda19e
