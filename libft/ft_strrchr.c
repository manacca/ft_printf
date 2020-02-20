/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 09:46:06 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:38:21 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)s;
	while (str[i])
		i++;
	if ((char)c == '\0')
		return (str + i);
	while (i >= 0 && str[i] != (char)c)
		i--;
	if (i == -1)
		return (0);
	else
		return (str + i);
}
