/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lenp.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 12:00:03 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 12:09:49 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_lenp(unsigned long nb)
{
	int i;

	i = 2;
	if (nb > 2147483647)
	{
		i = i + ft_taille_hex_long(nb);
		return (i);
	}
	i = i + ft_taille_hex(nb);
	return (i);
}
