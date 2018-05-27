#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*t;
	size_t	i;
	
	d = dest;
	s = src;
	t = (char *)malloc(sizeof(n) * n + 1);
	i = 0;
	while (i++ <= n)
		t[i] = s[i];
	i = 0;
	while (i++ <= n)
		d[i] = t[i];
	free(t);
	return (d);
}
