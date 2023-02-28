#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
    int i, len;
    char *p, temp;

    len = strlen(s);
    p = s;

    for (i = 0; i < len / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + len - i - 1);
        *(p + len - i - 1) = temp;
    }
}

