#include <stddef.h>

char	*ft_strdup(const char *str)
{
    size_t	size;
    char	*dup;
    size_t	i;

    size = 0;
    while (str[size]) 
    {
        size++;
    }
    dup = malloc(sizeof(char) * size + 1);
    if (dup == ((void *)0))
    {
        return (((void *)0));
    }
    i = 0;
    while (i < size)
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
