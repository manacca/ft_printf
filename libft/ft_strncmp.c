/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:43:23 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 09:39:37 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned const char *str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned const char*)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] != '\0' && (str1[i] == str2[i]) && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}
