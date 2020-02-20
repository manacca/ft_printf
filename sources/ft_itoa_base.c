/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/08 13:54:12 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 13:40:59 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_abs(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

char	*ft_itoa_base(long nb, char *tab)
{
	char	*str;
	int		i;
	int		neg;

	neg = 0;
	i = 0;
	if (nb < 0)
		neg = 1;
	i = ft_taille_hex(nb);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (neg == 1)
	{
		str[0] = '-';
		nb = -nb;
		i--;
	}
	str[i] = '\0';
	while (i > neg)
	{
		str[i - 1] = tab[ft_abs(nb % 16)];
		i--;
		nb = nb / 16;
	}
	return (str);
}
