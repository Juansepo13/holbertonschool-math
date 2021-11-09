#include "holberton.h"
/**
 * conjugate - Function conjugate.
 * @c: Struct.
 *
 * Return: 0, success
 */

complex conjugate(complex c)
{
	if (c.im < 0)
		c.im = c.im * (-1);
	else
		c.im = -c.im;
	return (c);
}
