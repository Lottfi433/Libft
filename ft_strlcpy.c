char ft_strlcpy(char *dst, const char *src, unsigned int size);
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}