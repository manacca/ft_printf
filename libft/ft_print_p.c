/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_p.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/12 16:17:56 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:30:09 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_print_p(unsigned long nb, char *base)
{
	int i;

	i = 0;
	i = ft_putstr_len("0x");
	if (nb > 2147483647)
	{
		i = i + ft_taille_hex_long(nb);
		ft_putnbr_base_long(nb, base);
		return (i);
	}
	i = i + ft_taille_hex(nb);
	ft_putnbr_base(nb, base);
	return (i);
}
