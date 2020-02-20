/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 14:08:33 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 13:47:28 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_lenght;
	char			*str;

	str_lenght = ft_strlen(s);
	if (!(str = malloc((str_lenght + 1) * sizeof(char))))
		return (NULL);
	str[str_lenght] = '\0';
	i = 0;
	if (s)
		while (i < str_lenght)
		{
			str[i] = f(i, s[i]);
			i++;
		}
	return (str);
}
