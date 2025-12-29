#include "libft.h"

char *strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (*s);
		*s++;
	}
	return (NULL);
}