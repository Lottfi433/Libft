char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *a;
    int     s_len;
    unsigned int i;

    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        a = malloc(1);
        if (a == NULL)
        {
            return (NULL);
        }
        a[0] = '\0';
        return (a);
    }
    else
    {
        len = s_len - start;
        a = malloc (sizeof(char) * len + 1);
        if (a == NULL)
        {
            return (NULL);
        }
        i = 0;
        while (s[start + i] != '\0' && start + i < len)
        {
            a[i] = s[start + i];
            i++;
        }
        a[i] = '\0';
        return (a);
    }
}