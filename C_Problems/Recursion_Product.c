#include <stdio.h>

long multiply (long a, int b, int c)
{
    if (c == 0)
        return a;
    else
        return (multiply ((a + b), b, (c - 1)));
}

int main()
{
    int num1, num2;
    printf ("Enter the 2 numbers to be multiplied: ");
    scanf ("%d %d", &num1, &num2);

    long prod = multiply (0, num1, num2);
    printf ("The product of %d and %d is %ld.\n", num1, num2, prod);
    return 0;
}
