#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char *ft_strdup(const char *str)
{
    size_t size;
    char *dup;
    size_t i;

    size = 0;
    while (str[size]) 
    {
        size++;
    }
    dup = malloc(sizeof(char) * size + 1);
    i = 0;
    while (i < size)
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

#include <stdio.h>
int main()
{
    char str[] = "Hello.";
    char *dup = ft_strdup(str);
    printf("%s\n", dup);
    free(dup);
}