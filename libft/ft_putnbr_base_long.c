/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base_long.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/04 13:40:34 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 13:47:55 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		errorbis(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_base_long(unsigned long nb, char *base, unsigned int base_len)
{
	unsigned long nbr;

	nbr = nb;
	if (nbr >= base_len)
		ft_base_long(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base_long(unsigned long nbr, char *base)
{
	unsigned long base_len;

	base_len = 2;
	base_len = errorbis(base);
	if (!base_len)
		return ;
	ft_base_long(nbr, base, base_len);
}
