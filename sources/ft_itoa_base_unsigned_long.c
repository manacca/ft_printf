/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base_unsigned_long.c                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 11:46:43 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 12:01:36 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_abs1(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

char	*ft_itoa_base_unsigned_long(unsigned long nb, char *tab)
{
	char				*str;
	int					i;
	int					neg;
	unsigned long		temp;

	neg = 0;
	i = 0;
	temp = nb;
	if (nb > 2147483647)
		i = ft_taille_hex_long(nb) + 2;
	else
		i = ft_taille_hex(nb) + 2;
	str = (char *)malloc(sizeof(char) * i + 1);
	str[0] = '0';
	str[1] = 'x';
	str[i] = '\0';
	while (i > 2)
	{
		str[i - 1] = tab[ft_abs1(nb % 16)];
		i--;
		nb = nb / 16;
	}
	return (str);
}
