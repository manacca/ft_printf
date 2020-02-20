/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_len_unsigned.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 12:04:44 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 12:05:23 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_len_unsigned(unsigned int nb)
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
