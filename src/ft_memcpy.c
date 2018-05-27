#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char *d;
	char *s;

	d = dest;
	s = src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
