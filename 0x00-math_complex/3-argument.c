#include "holberton.h"
#include <math.h>

/**
 * argument - Function that returns the argument of a given complex number
 * @c: Struct complex
 *
 * Return: Return value
 */

double argument(complex c)
{
	double argum;

	argum = atan(c.im / c.re); /*convert argum to complex number*/
	return (argum);
}
