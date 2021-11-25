#include "holberton.h"

/**
 *substraction - Function that performs the substractn operatn to complex num.
 *@c1: First Complex number.
 *@c2: Second complex number.
 *@c3: Result of substraction.
 *
 *Return: None.
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
