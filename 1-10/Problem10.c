/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long int n);

int main()
{
    unsigned long long sum = 0;
    long int i;

    for(i=2; i<2000000; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    printf("%lld\n", sum);
    return 0;
}   


bool isPrime(long int n)
{
    long int i;
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