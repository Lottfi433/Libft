#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *f_str;
    unsigned char *s_str;
    size_t i;

    f_str = (unsigned char *)s1;
    s_str = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (f_str[i] != s_str[i])
        {
            return (f_str[i] - s_str[i]);
        }
        i++;
    }
    return (0);
}