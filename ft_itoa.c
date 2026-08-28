#include <stdlib.h>

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n == -2147483648)
	{
		return (11);
	}
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_getarr(int n, char *a, size_t size)
{
	size_t i;

	i = size - 2;
	a[i + 1] = '\0';
	if (n < 0)
	{
		a[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		a[i] = '0' + (n % 10);
		i--;
		n /= 10;
	}
	return (a);
}

static char	*ft_intmintoa(char *a, size_t size)
{
	size_t	i;
	int		n;

	a[0] = '-';
	i = size - 3;
	n = 214748364;
	while (n != 0)
	{
		a[i] = '0' + (n % 10);
		i--;
		n /= 10;
	}
	a[10] = '8';
	a[11] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	size_t	size;
	
	size = ft_intlen(n) + 1;
	a = malloc(size * sizeof(char));
	if (a == ((void *)0))
	{
		return (((void *)0));
	}
	if (n == 0)
	{
		a[0] = '0';
		a[1] = '\0';
		return (a);
	}
	if (n == -2147483648)
	{
		return (ft_intmintoa(a, size));
	}
	return (ft_getarr(n, a, size));
}
