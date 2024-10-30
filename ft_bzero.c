/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:09:21 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/30 09:38:00 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		b[i] = 0;
		i++;
	}
}
