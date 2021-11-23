#include <math.h>
#include "holberton.h"

/**
 * modulus - Function that returns the modulus
 * @c: the complex fiven number
 *
 * Return: the modulus of complex
 */

double modulus(complex c)
{
	double module = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (module);
}
