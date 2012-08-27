/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, n, times;
    bool done = false;

    for(i=1; i<1000000000; i++)
    {
        if(done)
        {
            break;
        }
        times = 0;
        if((i % 2) == 0)
        {
            for(n=1; n<=20; n++)
            {
                if((i % n) == 0)
                {
                    times += 1;
                    if(times == 20)
                    {
                        printf("%d\n", i);
                        done = true;
                    }
                }
                else
                {
                    break;
                }
            }
        } 
    }
    return 0;
}