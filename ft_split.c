/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:53:19 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 14:59:33 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s[0] != c)
		j = j + 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j = j + 1;
		i++;
	}
	return (j);
}

size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i); 
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	words_number;
	size_t	word_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	words_number = ft_count_words(s, c);
	i = 0;
	a = (char **)malloc((words_number + 1) * sizeof(char *));
	if (a == NULL)
		return (NULL);
	while (i < words_number)
	{
		while (*s == c)
			s++;
		word_len = ft_word_len(s, c) + 1;
		a[i] = malloc(word_len);
		if (a[i] == NULL)
		{
			while (i > 0)
			{
				free(a[i - 1]);
				i--;
			}
			free(a);
			return (NULL);
		}
		j = 0;
		while (j < word_len)
		{
			a[i][j] = *s;
			s++;
			j++;
		}
		a[i][j] = '\0';
		i++;
	}
	a[i] = NULL;
	return (a);
}
