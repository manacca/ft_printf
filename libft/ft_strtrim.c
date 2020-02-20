/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 15:25:41 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 13:45:09 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_charset(const char c, char const *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	size;
	char			*start;
	char			*stop;
	char			*str;

	size = 0;
	if (s1 && set)
	{
		start = (char *)s1;
		stop = (char *)s1;
		while (*stop)
			stop++;
		stop--;
		while (ft_is_in_charset(*start, set))
			start++;
		while (ft_is_in_charset(*stop, set))
			stop--;
		size = (stop - start > 0) ? stop - start : 0;
	}
	if (!(str = malloc((sizeof(char) * (size + 1)))))
		return (NULL);
	ft_strlcpy(str, start, size + 2);
	return (str);
}
