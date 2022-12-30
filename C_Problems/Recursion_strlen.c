#include <stdio.h>

int str_len (char* s, int i, int c)
{
    if (s [i] == '\0')
        return c;
    else
        return (str_len (s, (i + 1), (c + 1)));
}

int main()
{
    char str [100];
    printf ("Enter the String whose length is to be calculated:\n");
    scanf ("%[^\n]", str);

    int len = str_len (str, 0, 0);
    printf ("The length of the String %s = %d.\n", str, len);
    return 0;
}
