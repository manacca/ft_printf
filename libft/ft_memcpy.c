/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:08:27 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:31:17 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;

	if (!dst && !src)
		return (NULL);
	src2 = src;
	dst2 = dst;
	while (n-- > 0)
		*dst2++ = *src2++;
	return (dst);
}
