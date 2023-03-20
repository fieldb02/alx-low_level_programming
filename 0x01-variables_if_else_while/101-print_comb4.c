#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Print all possible digits of 3 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
   int i, j, k;

   for (i = 0; i < 10; i++) {
      for (j = 0; j < 10; j++) {
         for (k = 0; k < 10; k++) {
            if (i != j && j != k && i != k) {
               putchar(i + '0');
               putchar(j + '0');
               putchar(k + '0');
            }
         }
      }
   }
	putchar('0');
   return (0);
}
