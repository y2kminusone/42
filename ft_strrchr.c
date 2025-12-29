#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*last;
	int		i;

	i = 0;
	last = null;
	while (*s)
	{
		if (*s == c)
			last = s;
		*s++;
	}
	return (last);
}
