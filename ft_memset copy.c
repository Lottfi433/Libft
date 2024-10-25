/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:56:21 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/25 13:02:10 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int main()
{
	int	x = 0;
	int i = 0;
	char *ptr;

	ptr = (char *)&x;
	while (i <= 4)
	{
		ptr[i] = 0;
		i++;
	}
	i = 0;
	ft_memset(&ptr[i], 39, 1);
	ft_memset(&ptr[i + 1], 05, 1);
	printf ("%d",x);
}