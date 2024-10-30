/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:26:51 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 09:38:57 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*srs;
	unsigned char	*dst;
	size_t			i;

	srs = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	if (dst < srs)
	{
		while (i < n)
		{
			dst[i] = srs[i];
			i++;
		}
	}
	else if (dst > srs)
	{
		while (n > 0)
		{
			dst[n - 1] = srs[n - 1];
			n--;
		}
	}
	return (dest);
}
