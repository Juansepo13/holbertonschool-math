#include "holberton.h"
#include <math.h>

/**
 *Multiplication - Function that performs the multiplication operation to
 * complex number
 *@c1: Struc Complex1
 *@c2: Struc Complex2
 *@c3: Struc Complex3
 *
 *Return: Multiplications of numbers
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	(*c3).re = ((c1.re * c2.re) - (c1.im * c2.im));
	(*c3).im = ((c1.re * c2.im) * (c1.im * c2.re));
}
