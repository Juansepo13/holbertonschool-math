#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
/**
 *struct complex - Struct complex
 *@re: Real Number.
 *@im: Imaginary Number.
 *
 *Description: This is a normal struct to complex number.
 */
typedef struct complex
{
	double re;
	double im;
} complex;
/* Write a function that displays the complex numbers, followed by a new line. */
void display_complex_number(complex c);
/* Write a function that returns the conjugate of a given complex number. */
complex conjugate(complex c);
/* Write a function that returns the modulus of a given complex number. */
double modulus(complex c);
/* Write a function that returns the argument of a given complex number. */
double argument(complex c);
/* Write a function that performs the addition operation to complex numbers. */
void addition(complex c1, complex c2, complex *c3);
/* Write a function that performs the substraction operation to complex numbers. */
void substraction(complex c1, complex c2, complex *c3);
/* Write a function that performs the multiplication operation to complex numbers. */
void multiplication(complex c1, complex c2, complex *c3);
/* Write a function that performs the division operation to complex numbers. */
void division(complex c1, complex c2, complex *c3);
/* Write a function that update the real and the imaginary parts of a complex number given its modulus and arguments. */
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif
