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
    while (i < n)
    {
        ds[i] = ss[i];
        i++;
    }
    return ((void *)ds);
}