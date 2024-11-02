/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:10:22 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/11/01 16:29:22 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	if (count == 0 && size == 0)
		return (malloc(1));
	str = malloc(count * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
