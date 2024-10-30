/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:10:22 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 09:38:06 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*str;

	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
