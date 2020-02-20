/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 09:46:35 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:50:17 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*str;

	str = (char*)s;
	len = 0;
	while (str[len])
		len++;
	if (c == '\0')
		return (str + len);
	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (i == len)
		return (0);
	else
		return (str + i);
}
