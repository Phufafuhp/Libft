#include <stdlib.h>

static size_t	ft_inset(const int c, const char *set)
{
    size_t	i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

static size_t	ft_trimlen(const char *s1, const char *set)
{
    size_t	i;
    size_t	len;

    i = 0;
    len = 0;
    while (s1[i])
    {
        if (ft_inset(s1[i], set) == 0)
        {
            len++;
        }
        i++;
    }
    return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
    size_t	i;
    size_t	j;
    char	*trim;

    trim = malloc((ft_trimlen(s1, set) + 1) * sizeof(char));
    if (trim == ((void *)0))
    {
        return (((void *)0));
    }
    i = 0;
    j = 0;
    while (s1[i])
    {
        if (ft_inset(s1[i], set) == 0)
        {
            trim[j] = s1[i];
            j++;
        }
        i++;
    }
    trim[j] = '\0';
    return (trim);
}
