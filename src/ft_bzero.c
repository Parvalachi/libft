#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *c;

	c = s;
	while(n)
	{
		c[n] = '\0';
		n--;
	}
}
