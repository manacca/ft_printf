/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write_accur.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/07 13:34:23 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 14:19:07 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_write_accur(t_structpf pf, va_list ap, int lenap)
{
	if (pf.flag == '%')
	{
		pf = ft_write_pour(pf, ap, lenap);
		return (pf);
	}
	if (pf.nb2 < 0 && pf.flag == 'u' && lenap == 0)
		pf.nb2 = lenap + 1;
	if (pf.apneg)
		pf.nb2++;
	if (pf.nb2 < 0)
		pf.nb2 = lenap;
	if (lenap > pf.nb2 && pf.flag != 'd' && pf.flag != 'i' && pf.flag != 'u'
			&& pf.flag != 'x' && pf.flag != 'X')
		lenap = pf.nb2;
	else
		pf.nb2 = pf.nb2 - lenap;
	if (pf.flag != 's' && pf.nb2 > 0)
		pf = ft_put_0(pf);
	pf = ft_write_pour(pf, ap, lenap);
	return (pf);
}
