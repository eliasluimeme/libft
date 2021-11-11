#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*srctmp;
	unsigned char	*desttmp;

	srctmp = (unsigned char *)src;
	desttmp = (unsigned char *)dst;
	while (n > 0)
	{
		*desttmp++ = *srctmp++;
		n--;
	}
	return ((void *)dst);
}