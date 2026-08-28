#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
    void	*ptr;

    if (nmemb == 0 || size == 0)
    {
        return (((void *)0));
    }
    ptr = malloc(nmemb * size);
    if (ptr == ((void *)0))
    {
        return (((void *)0));
    }
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}
