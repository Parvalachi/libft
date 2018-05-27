#include "libft.h"

void	ft_strcpy(char *dest, const char *src)
{
	int 	i;

	i = 0;
	while (str[i++] != '\0')
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
