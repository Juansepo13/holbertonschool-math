#include <stdio.h>
#include "holberton.h"

/**
 *multiplication - Function that performs the multiplication
 * operation to complex numbers.
 *@c: complex type
 *
 *Return: None.
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	complex *com1, *com2;

	com1 = &c1;
	com2 = &c2;
	c3->re = (com1->re * com2->re) - (com1->im * com2->im);
	c3->im = (com1->re * com2->im) + (com1->im * com2->re);

}
