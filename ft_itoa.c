#include <stdio.h>
#include <stdlib.h>

int	ft_integerlen(int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		n_len;
	long	num;

	num = n;
	n_len = ft_integerlen(num);
	a = malloc(n_len + 1);
	if (!a)
		return (NULL);
	a[n_len] = '\0';
	if (num == 0)
	{
		a[0] = '0';
	}
	while (num > 0)
	{
		a[--n_len] = (num % 10) + '0';
		num = num / 10;
	}
	return (a);
}
