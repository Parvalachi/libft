#include "libft.h"

char	*strdup(const char *s)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(s) * ft_strlen(s) + 1);
	i = 0;
	while (s[i++] != '\0')
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
