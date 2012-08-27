/*
The difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>

int main()
{
   int sum_square = 0, square_sum = 0, i;

   for (i = 1;i<=100; i++)
   {
      sum_square += (i * i);
      square_sum += i;
   }

   square_sum *= square_sum;

   printf("%d\n", (square_sum - sum_square));

   return 0;
}