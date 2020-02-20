/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:27:49 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:32:30 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*src2;
	unsigned char		*dst2;

	src2 = (unsigned char*)src;
	dst2 = (unsigned char*)dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*dst2 = *src2;
		if (*src2 == (unsigned char)c)
			return ((void*)++dst2);
		dst2++;
		src2++;
	}
	return (NULL);
}
