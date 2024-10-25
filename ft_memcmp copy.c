/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazlaigi <yazlaigi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:27:13 by yazlaigi          #+#    #+#             */
/*   Updated: 2024/10/22 15:23:20 by yazlaigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*fs;
	const unsigned char	*ss;
	size_t				i;

	if (n == 0)
	{
		return (0);
	}
	fs = (const unsigned char *)s1;
	ss = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (fs[i] != ss[i])
		{
			return (fs[i] - ss[i]);
		}
		i++;
	}
	return (0);
}
