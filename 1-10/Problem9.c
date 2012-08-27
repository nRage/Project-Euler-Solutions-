/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c, limit = 1000, product;
    bool found = false;

for (a=1; a<limit; a++) 
{
    for (b=a; b<limit; b++) 
    {
        c = limit - a - b;
 
        if ((a * a) + (b * b) == (c * c))
        {
            found = true;
            product = a * b * c;
            break;
        }
    }
    
    if (found) 
    {
        break;
    }
}
     printf("%d\n", product);
     return 0;
}