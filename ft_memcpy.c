/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:58:02 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 09:38:54 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srs;
	unsigned char	*dst;

	srs = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dst[i] = srs[i];
		i++;
	}
	return ((void *)dst);
}
