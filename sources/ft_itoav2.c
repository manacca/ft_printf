/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoav2.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/07 11:14:12 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/07 15:19:14 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int		ft_lenv2(long nb)
{
	int len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char			*ft_itoav2(int n)
{
	int		i;
	long	nb;
	char	*res;

	nb = n;
	i = ft_lenv2(nb);
	if (nb < 0)
		i--;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i--] = '\0';
	if (nb == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		res[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (res);
}
