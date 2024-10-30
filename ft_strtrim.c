/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:44:30 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 15:17:20 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocation(size_t	t_len)
{
	char	*a;

	a = malloc (t_len + 1);
	if (a == NULL)
		return (NULL);
	if (t_len == 0)
	{
		a[0] = '\0';
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	f_index;
	size_t	l_index;
	size_t	t_len;

	if (!s1 || !set)
		return (NULL);
	f_index = 0;
	while (s1[f_index] != '\0' && ft_strchr(set, s1[f_index]) != NULL)
		f_index++;
	l_index = ft_strlen(s1);
	while (l_index > f_index && ft_strchr(set, s1[l_index - 1]) != NULL)
		l_index--;
	t_len = l_index - f_index;
	if (t_len <= 0)
		return (allocation(0));
	a = allocation(t_len);
	l_index = 0;
	while (l_index < t_len)
	{
		a[l_index] = s1[f_index + l_index];
		l_index++;
	}
	a[l_index] = '\0';
	return (a);
}
