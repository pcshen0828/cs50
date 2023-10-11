#include <stdio.h>
#include <cs50.h>

int main (void)
{
  // #format code
  // %i: integer
  // %li: long integer
  // %f: float
  // %c: char
  // %s: string

  // #integer overflow: run out of bits
  // note: finite number can only count to +-2147483647
  // int x = get_int("x: ");
  // int y = get_int("y: ");

  // printf("%i\n", x + y); // wrong output

  // #with correct output
  // long x = get_long("x: ");
  // long y = get_long("y: ");

  // printf("%li\n", x + y);

  // #truncation
  // long x = get_long("x: ");
  // long y = get_long("y: ");
  // long z = x / y;

  // printf("%li\n", z); // wrong output: 0

  // #with type casting
  // long x = get_long("x: ");
  // long y = get_long("y: ");
  // float z = (float) x / (float) y;

  // printf("%f\n", z); // correct output: 0.333333

  // #floating point imprecision: how precise a float is
  // long x = get_long("x: ");
  // long y = get_long("y: ");
  // float z = (float) x / (float) y;

  // printf("%.20f\n", z); // imprecise output: 0.33333334326744079590

  // #make more precise
  double x = get_long("x: ");
  double y = get_long("y: ");
  double z = (double) x / (double) y;

  printf("%.20f\n", z); // more precise output: 0.33333333333333331483

}