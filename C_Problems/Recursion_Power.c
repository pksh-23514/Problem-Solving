#include <stdio.h>

long power (long r, int n, int p)
{
    if (p == 0)
        return r;
    else
        return (power ((r * n), n, (p - 1)));
}

int main()
{
    int num, pow;
    printf ("Enter the number whose power needs to be calculated = ");
    scanf ("%d", &num);
    printf ("Enter the power of the number to be calculated = ");
    scanf ("%d", &pow);

    long res = power (1, num, pow);

    printf ("The Value of the number %d raised to the power %d = %ld\n", num, pow, res);
    return 0;
}
