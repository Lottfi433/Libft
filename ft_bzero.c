#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    char *a;
    a = (char *)s;
    size_t i ;

    i = 0;
    while (i < n)
    {
        a[i] = 0;
        i++;
    }
}