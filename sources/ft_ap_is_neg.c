/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ap_is_neg.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:24:42 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:28:54 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_ap_is_neg(t_structpf pf, va_list ap)
{
	va_list	ad;
	int		checkad;

	checkad = 0;
	va_copy(ad, ap);
	if (pf.flag == 'd' || pf.flag == 'i')
		checkad = va_arg(ad, int);
	va_end(ad);
	if (pf.flagnb1 == 0 && pf.nb1 != 0 && pf.nb2true == 1 && pf.nb1 > pf.nb2)
	{
		if (checkad < 0)
			pf.apneg = -3;
		return (pf);
	}
	if (checkad < 0 && ((pf.flagnb1 == 1 && pf.nb2 > pf.nb1)
				|| pf.flagnb1 != 1))
	{
		pf.str[pf.tempi] = '-';
		pf.tempi++;
		pf.apneg = -1;
	}
	else if (checkad < 0)
		pf.apneg = -2;
	return (pf);
}
