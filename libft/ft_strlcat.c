/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:59:19 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:40:44 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dest[len] && len < n)
		len++;
	i = len;
	while (src[len - i] && len + 1 < n)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < n)
		dest[len] = '\0';
	return (i + ft_strlen((char*)src));
}
