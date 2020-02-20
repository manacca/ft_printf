/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_put_space_or_0.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 12:42:50 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 13:55:41 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_put_space_or_0(t_structpf pf)
{
	if (pf.flagnb1 == 0)
	{
		while (pf.nb1 != 0)
		{
			pf.str[pf.tempi] = '0';
			pf.tempi++;
			pf.nb1--;
		}
	}
	else if (pf.flagnb1 == 1 || pf.flagnb1 == -1)
	{
		while (pf.nb1 != 0)
		{
			pf.str[pf.tempi] = ' ';
			pf.tempi++;
			pf.nb1--;
		}
	}
	return (pf);
}
