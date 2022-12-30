#include <stdio.h>
//Prime number means it shall only be divisible by '1' or 'itself'. So, anywhere in between if '1' to 'number'; if we get a divisor then it is not a Prime number.
//Prime numbers cannot be negative. Also, '2' is the First Prime number.

int check (int n, int i)
{
    if (n <= 2)             //Special case for all the negative numbers, '0', '1' and '2'.
    {
        if (n < 2)          //If the number is a negative numbers, '0'or '1'; they are Undefined.
            return 0;
        else                //If the number is '2', it is a Prime number.
            return 1;
    }

    if ((n % i) == 0)       //If a Divisor completely divides 'n' (other than '1' or 'n'), this is a Composite number.
        return 2;

    if ((i * i) > n)        //If the Divisor becomes greater than the Square root of 'n'; it means there are no divisor between '1' and '(n)^(1/2). It is a Prime number.
        return 1;

    check (n, (i + 1));     //Check for the next Divisor.
}

int main()
{
    int num;
    printf ("Enter the number to be checked as Prime or not = ");
    scanf ("%d", &num);

    int c = check (num, 2);
    if (c == 0)
    {
        printf ("Cannot be determined.\n");
    }
    else if (c == 1)
    {
        printf ("The number %d is Prime.\n", num);
    }
    else if (c == 2)
    {
        printf ("The number %d is Composite.\n", num);
    }
    return 0;
}
