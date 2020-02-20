/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:33:27 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 14:58:22 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(long nb)
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

char			*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*res;

	nb = n;
	i = ft_len(nb);
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i--] = '\0';
	if (nb == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (res);
}
