#include <stdlib.h>
#include <stdio.h>

size_t ft_count_words(char *str, char c)
{
    size_t i = 0;
    size_t j = 0;
    if (str[0] != c)
        j = j + 1;
    while (str[i] != '\0')
    {
        if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
        {
            j++;
        }
        i++;
    }
    return j;
}
size_t	ft_countlen(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char    **ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	w_len;

	i = 0;
	words = ft_count_words(s, c);
	ptr = (char **)malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		w_len = ft_countlen (s, c);
		ptr[i] = (char *)malloc(w_len + 1);
		if (ptr[i] == NULL)
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < w_len)
			ptr[i][j++] = *s++;
			ptr[i][j] = '\0';
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
int main ()
{

}