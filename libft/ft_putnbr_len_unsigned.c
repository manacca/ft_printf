/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_len_unsigned.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/12 14:18:10 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:49:17 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_unsigned(unsigned int nb)
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

int			ft_putnbr_len_unsigned(unsigned int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (!nbr)
	{
		ft_putchar('0');
		return (1);
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
	return (ft_len_unsigned(nb));
}
