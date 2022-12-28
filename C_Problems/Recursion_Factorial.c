#include <stdio.h>

long factorial (long f, int n)
{
    if (n == 1)
        return f;
    else
        return (factorial ((f * n), (n - 1)));
}

int main()
{
    int num;
    printf ("Enter the number for which the Factorial needs to be calculated = ");
    scanf ("%d", &num);

    long fact = factorial (1L, num);
    printf ("The Factorial for %d = %ld.\n", num, fact);
    return 0;
}
