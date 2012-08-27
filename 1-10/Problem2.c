/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
Solution by Paul Kelly <nRage>
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 1, sum = 0, c;

    do {
        c = a + b;
        a = b;
        b = c;
        if (b % 2 == 0) 
            sum += b;
    } while (b <= 4000000);

    printf("%d\n", sum);
    return 0;
}
