#include <stdio.h>
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    char *ss;
    char *ds;

    ss = (char *)src;
    ds = (char *)dest;

    size_t  i;

    i = 0;
    while (ss[i] != '\0' && i < n)
    {
        ds[i] = ss[i];
        i++;
    }
    ds[i] = '\0';
    return ((void *)ds);
}