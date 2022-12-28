#include <stdio.h>

int lcm_calc (int a, int b, int i)
{
    if ((i % a == 0) && (i % b == 0))
        return i;
    else
        return (lcm_calc (a, b, (i + 1)));
}

int main()
{
    int num1, num2;
    printf ("Enter the 2 numbers for calculating their Least Common Multiple (LCM): ");
    scanf ("%d %d", &num1, &num2);
    
    int lcm;
    if (num1 > num2)
    {
        printf ("Starting Multiple = %d.\n", num1);
        lcm = lcm_calc (num1, num2, num1);
    }
    else
    {
        printf ("Starting Multiple = %d.\n", num2);
        lcm = lcm_calc (num1, num2, num2);
    }

    printf ("The Least Common Multiple (LCM) of %d and %d is %d.\n", num1, num2, lcm);
    return 0;
}
