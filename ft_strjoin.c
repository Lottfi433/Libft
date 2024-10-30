/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:48:21 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 09:39:24 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*yass_cpy(char *a, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		a[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		a[j] = s2 [i];
		i++;
		j++;
	}
	a[j] = '\0';
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	t_len;
	char	*a;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	t_len = s1_len + s2_len;
	a = malloc(t_len + 1);
	if (a == NULL)
		return (NULL);
	return (yass_cpy(a, s1, s2));
}
