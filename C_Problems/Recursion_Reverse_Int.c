#include <stdio.h>

int reverse (int n, int r)
{
    if (n == 0)
        return r;
    else
        return (reverse ((n / 10), ((r * 10) + (n % 10))));
}

int main()
{
    int num;
    printf ("Enter the number to be reversed = ");
    scanf ("%d", &num);

    int rev = reverse (num, 0);
    printf ("The reverse of the number %d is %d.\n", num, rev);
    return 0;
}
