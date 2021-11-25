# 0x00. Math - Complex
***
## This is a README.md for the repository 0x00. Math - Complex
```
For Holberton School
Cohort 16 #12hourcode by @jhonbueno - [Twitter](https://twitter.com/jhonbuenoco)
```
### General
* Algebra operations.
* Absolute values.
* Cosinus and Sinus.
* The Cartesian plane.
* The Complex plane.
* Real part and Imaginary part of Complex Numbers.
* Modulus
* Argument

### More Info

* [Introduction to complex numbers](https://www.youtube.com/watch?v=SP-YJe7Vldo)
* [Modulus and Argument](https://www.youtube.com/watch?v=g5_ojBMubA)
* [Operations](https://math.mit.edu/~stoopn/18.031/complexnumbers.pdf)
* [Absolute value & angle](https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:complex/x9e81a4f98389efdf:complex-abs-angle/v/basic-complex-analysis)
* [Conjugates](https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:complex/x9e81a4f98389efdf:complex-div/v/complex-conjugates=)

```
#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

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

/*Write a function that displays the complex numbers,*/
/*followed by a new line.*/
void display_complex_number(complex c);
/*Write a function that returns the conjugate of a given complex number.*/
complex conjugate(complex c);
/*Write a function that returns the modulus of a given complex number.*/
double modulus(complex c);
/*Write a function that returns the argument of a given complex number.*/
double argument(complex c);
/*Write a function that performs the addition operation to complex numbers.*/
void addition(complex c1, complex c2, complex *c3);
/*Write a function that performs the substraction operation to complex numbrs*/
void substraction(complex c1, complex c2, complex *c3);
/*Write a function that performs the multiplication operation to cmplx numbrs*/
void multiplication(complex c1, complex c2, complex *c3);
/*Write a function that performs the division operation to complex numbers.*/
void division(complex c1, complex c2, complex *c3);
/*Write a function that update the real and the imaginary parts of a complex*/
/*Number given its modulus and arguments.*/
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif

```

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [0-display.c](./a) |	       |
| [1-conjugate.c](./b) |	       |
| [2-modulus.c](./c) |	       |
| [3-argument.c](./)  |	       |
| [4-addition.c](./)  |	       |
| [5-substraction.c]()|	       |
| [6-multiplication.c]()|      |
| [7-division.c]()|	       |
| [8-complex.c]()|	       |

### Author
***
*Holberton School Student*

Juan Sebastian Posada  - [Github](https://github.com/Juansepo13) - [Twiter](https://twitter.com/@JuanSeb35904130)