#include "libft.h"
#include <stdlib.h>


#include <stdio.h>
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*map;
	size_t 	i;

	map = malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	return (map);
}
