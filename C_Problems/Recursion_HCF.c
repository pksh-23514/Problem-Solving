#include <stdio.h>

int hcf_calc (int a, int b, int i)
{
    if ((a % i == 0) && (b % i == 0))
        return i;
    else
        return (hcf_calc (a, b, (i - 1)));
}

int main()
{
    int num1, num2;
    printf ("Enter the 2 numbers for calculating their Highest Common Factor (HCF): ");
    scanf ("%d %d", &num1, &num2);

    int hcf = 1;
    if (num1 < num2)
    {
        printf ("Starting Divisor = %d.\n", num1);
        hcf = hcf_calc (num1, num2, num1);
    }
    else
    {
        printf ("Starting Divisor = %d.\n", num2);
        hcf = hcf_calc (num1, num2, num2);
    }

    printf ("The Highest Common Factor (HCF) of %d and %d is %d.\n", num1, num2, hcf);
    return 0;
}
