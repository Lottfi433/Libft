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

int ft_strlcat(char *dst, const char *src, unsigned size)
{
    unsigned int ss;
    unsigned int ds;
    unsigned int r;
    unsigned int i;


    r = 0 ;
    ss = ft_strlen(src);
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