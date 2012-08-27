/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n);

int main()
{
    int current = 2, found = 0;

    while(true)
    {
        if(isPrime(current))
        {
            found += 1;
        }
        if(found == 10001)
        {
            printf("%d\n", current);
            break;
        }
        current += 1;
    }
    return 0;
}

bool isPrime(int n)
{
    int i;
    bool prime = true;

    for(i=2; i<=sqrt(n); i++)
    {
        if(n % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}