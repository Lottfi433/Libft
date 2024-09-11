#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    char C;
    size_t i;

    str = (char *)s;
    C = (char )c;
    i = 0;
    while (i < n)
    {
        if (str[i] == C)
        {
            return ((void *)&str[i]);
        }
        i++;
    }
    return (NULL);
}