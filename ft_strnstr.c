#include <stdio.h>

char    *strnstr(const char *str, const char *to_find, size_t  len)
{
    size_t i;
    size_t j;

    i = 0;
    if (to_find[0] == '\0')
    {
        return ((char *)str);
    }
    if (len == 0)
    {
        return (NULL);
    }
    while (str[i] != '\0' && i < len)
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0' && i + j < len)
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return ((char *)&str[i]);
        }
        i++;
    }
    return (NULL);
}