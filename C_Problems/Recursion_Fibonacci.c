#include <stdio.h>

void fibo (int first, int second, int third, int n)
{
    if (third > n)
    {
        printf (".");
        return;
    }
    else
    {
        printf ("%d", third);
        first = second;
        second = third;
        third = first + second;
        if (third <= n)
            printf (", ");
        return (fibo (first, second, third, n));
    }
}

int main()
{
    int limit;
    printf ("Enter the limit upto which the Fibonacci series will be printed = ");
    scanf ("%d", &limit);

    printf ("The Fibonacci Series goes as:\n");
    fibo (0, 1, 0, limit);
    printf ("\n");
    return 0;
}
