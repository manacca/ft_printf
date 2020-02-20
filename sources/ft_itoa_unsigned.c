/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_unsigned.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 10:40:46 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 13:39:00 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_len_unsigned1(unsigned int nb)
{
	unsigned int len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa_unsigned(unsigned int n)
{
	int				i;
	unsigned int	nb;
	char			*res;

	nb = n;
	i = ft_len_unsigned1(nb);
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i--] = '\0';
	if (nb == 0)
	{
		res[0] = 48;
		return (res);
	}
	while (nb > 0)
	{
		res[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (res);
}
