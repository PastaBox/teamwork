#include "ft.h"

char	*ft_strcpy(char *restrict dst, const char *src)
{
	int i;
//	int tmp1;
//	int tmp2;

	i = 0;
//	tmp1 = ft_strlen(dst);
//	tmp2 = ft_strlen(src);
//	if (tmp1 >= tmp2)
//	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
//	}
//	else
//		return (NULL);
	return (dst);
}
