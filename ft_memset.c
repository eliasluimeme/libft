#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
    
	tmp = (unsigned char *)b;
    if (!b)
		return (NULL);
	while (len--)
	{
		*tmp++ = c;
	return ((void *)tmp);