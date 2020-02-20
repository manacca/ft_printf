/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:45:01 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:44:42 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	j;
	size_t	len2;

	len2 = 0;
	i = -1;
	count = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s2[len2])
		len2++;
	while (s1[++i] && i < len)
		if (s1[i] == s2[0])
		{
			j = -1;
			count = 0;
			while (s1[i + ++j] && s2[j] && i + j < len)
				if (s1[i + j] == s2[j])
					count++;
			if (count == len2)
				return ((char*)s1 + i);
		}
	return (0);
}
