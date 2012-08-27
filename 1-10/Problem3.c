/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(unsigned long long n);

int main()
{
    unsigned long long a, b = 600851475143;

    for(a = sqrt(b); a>0; a--)
    {
        if((b % a) == 0 && (isPrime(a))) 
        {
                printf("Found: %lld\n", a);
                break;
            }
    }
    return 0;
}

bool isPrime(unsigned long long n)
{
    unsigned long long i;
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