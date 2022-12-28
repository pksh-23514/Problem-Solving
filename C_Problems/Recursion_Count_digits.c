#include <stdio.h>

int digit_count (int n, int c)
{
    if (n == 0)
        return c;
    else
        return (digit_count ((n / 10), (c + 1)));
}

int main()
{
    int num;
    printf ("Enter the number whose number of digits need to be counted = ");
    scanf ("%d", &num);

    int count = digit_count (num, 0);
    printf ("The number of digits in %d = %d.\n", num, count);
    return 0;
}
