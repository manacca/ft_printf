/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:39:04 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:35:33 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src2;
	char		*dst2;
	size_t		i;
	size_t		k;

	if (!dst && !src)
		return (NULL);
	i = 0;
	k = len;
	src2 = src;
	dst2 = dst;
	while (i < len)
	{
		if (src2 + i == dst2)
		{
			while (k >= 1)
			{
				dst2[k - 1] = src2[k - 1];
				k--;
			}
			return (dst);
		}
		i++;
	}
	return (ft_memcpy(dst, src, len));
}
