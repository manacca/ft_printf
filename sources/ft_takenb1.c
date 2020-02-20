/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takenb1.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:18:40 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:18:51 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_takenb1(const char *format, t_structpf pf, va_list ap)
{
	pf.flagnb1 = 1;
	if (format[pf.i] == '0')
	{
		pf.flagnb1 = 0;
		if (ft_flagnb1_neg(format, pf))
			pf.flagnb1 = -1;
	}
	else if (format[pf.i] == '-')
		pf.flagnb1 = -1;
	while (format[pf.i] == '0' || format[pf.i] == '-')
		pf.i++;
	if (format[pf.i] == '*')
		pf.nb1 = va_arg(ap, int);
	else
		pf.nb1 = ft_atoi_v2(format, pf.i);
	if (pf.nb1 < 0)
	{
		pf.nb1 = pf.nb1 * -1;
		pf.flagnb1 = -1;
	}
	return (pf);
}
