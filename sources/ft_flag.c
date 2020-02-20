/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/04 13:30:18 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:26:37 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_flag(const char *format, t_structpf pf, va_list ap)
{
	pf.nb1 = 0;
	pf.nb2 = 0;
	pf.nb2true = 0;
	pf.apneg = 0;
	pf.i++;
	pf = ft_takenb1(format, pf, ap);
	if (format[pf.i] == '*')
		pf.i++;
	else
		pf = ft_skip(format, pf);
	if (format[pf.i] == '.')
	{
		pf.nb2true = 1;
		pf.i++;
		pf.nb2 = ft_takenb(format, pf.i, pf.nb2, ap);
		if (format[pf.i] == '*')
			pf.i++;
		else
			pf = ft_skip(format, pf);
	}
	if (ft_format(format, pf.i) == 1)
		pf.flag = format[pf.i];
	pf = ft_ap_is_neg(pf, ap);
	pf = ft_write(format, pf, ap);
	return (pf);
}
