/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write_pour_accur.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/07 13:38:53 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:56:12 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf		ft_cut_1(t_structpf pf, int lenap)
{
	if (pf.nb2 > 0 && pf.flag == '%')
	{
		pf.nb2 = 0;
		pf.nb1--;
	}
	if (pf.nb2 < 0 && pf.flag == 's')
		pf.nb2 = -pf.nb2;
	if (pf.flag == 's' && pf.nb1 < lenap && pf.nb2 > 0 && pf.nb1 < pf.nb2)
		pf.nb1 = 0;
	if (pf.apneg == -1 && pf.flagnb1 == -1 && pf.nb1 > pf.nb2 &&
			pf.nb2 != lenap - 1 && (pf.flag == 'd' | pf.flag == 'i'))
		pf.nb1--;
	if (pf.apneg == -2 && pf.nb2 != 1)
		pf.nb1--;
	if (pf.flagnb1 == 0 && (pf.apneg != -3 || pf.nb2 < lenap) && pf.flag != '%')
		pf.flagnb1 = 1;
	if (pf.flagnb1 == 0 && pf.nb1 > pf.nb2 && pf.apneg == -3)
	{
		pf.flagnb1 = 1;
		pf.apneg = -2;
		pf.nb1--;
	}
	return (pf);
}

t_structpf		ft_cut_2(t_structpf pf, int lenap)
{
	if (pf.flagnb1 == 0 && pf.apneg == -3)
	{
		pf.str[pf.tempi] = '-';
		pf.tempi++;
		pf.nb1--;
		pf.apneg = -1;
	}
	if (pf.nb2 < lenap && (pf.flag == 'd' || pf.flag == 'i'
				|| pf.flag == 'u' || pf.flag == 'x' || pf.flag == 'X'))
		pf.nb1 = pf.nb1 - lenap;
	else if (pf.flag != 's')
		pf.nb1 = pf.nb1 - pf.nb2;
	else if (pf.nb2 > lenap)
		pf.nb1 = pf.nb1 - lenap;
	else if (pf.nb1 >= pf.nb2 && pf.flag == 's' && lenap != 0)
		pf.nb1 = pf.nb1 - pf.nb2;
	if (pf.nb1 > 0 && (pf.flagnb1 == 1 || pf.flagnb1 == 0))
		pf = ft_put_space_or_0(pf);
	return (pf);
}

t_structpf		ft_write_pour_accur(t_structpf pf, va_list ap, int lenap)
{
	pf = ft_cut_1(pf, lenap);
	pf = ft_cut_2(pf, lenap);
	if (lenap > pf.nb2 && pf.flag != 'd' && pf.flag != 'i' && pf.flag != 'u'
			&& pf.flag != 'x' && pf.flag != 'X')
		lenap = pf.nb2;
	else
		pf.nb2 = pf.nb2 - lenap;
	if (pf.apneg)
		pf.nb2++;
	if (pf.apneg == -2)
	{
		pf.str[pf.tempi] = '-';
		pf.tempi++;
		pf.apneg = -1;
	}
	if (pf.flag != 's' && pf.nb2 > 0)
		pf = ft_put_0(pf);
	pf = ft_write_pour(pf, ap, lenap);
	if (pf.nb1 > 0 && pf.flagnb1 == -1)
		pf = ft_put_space_or_0(pf);
	return (pf);
}
