#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  f_index;
    size_t  l_index;
    size_t  t_len;
    size_t  i;
    char    *a;

    f_index = 0;
    while (s1[f_index] != '\0' && ft_strchr(set,s1[f_index]) != NULL)
        f_index++;
    l_index = 0;
    while (s1[l_index] != '\0')
        l_index++;
    while (l_index > 0 && ft_strchr(set, s1[l_index - 1]) != NULL)
        l_index--;
    t_len = l_index - f_index;
    a = malloc (t_len + 1);
    if (a == NULL)
        return (NULL);
    i = 0;
    while (i < t_len)
    {
        a[i] = s1[f_index + i];
        i++;
    }
    a[i] = '\0';
    return (a);
    }

    int main ()
    {
        char a[] = "hello word";
        char b[] = "herd";
        printf("%s", ft_strtrim(a, b));
    }