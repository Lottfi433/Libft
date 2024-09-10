#include <stdio.h>
#include <string.h>

int ft_strlen (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t ss;
    size_t ds;
    size_t r;
    size_t i;


    r = 0 ;
    ss = ft_strlen((char *)src);
    ds = ft_strlen(dst);

    if (ds < size)
    {
        r = ss + ds;
    }
    else
    {
       r = ss + size;
    }
    i = 0;
    while (src[i] != '\0' && ds + i < size - 1)
    {
        dst[ds + i] = src[i];
        i++;
    }
    dst[ds + i] = '\0';
    return (r);
}
int main ()
{
    char a[256];
    int d = strlcat(a,NULL,4);
    printf("%d",d);
}