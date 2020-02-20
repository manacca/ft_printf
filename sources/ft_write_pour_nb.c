/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write_pour_nb.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/07 13:30:21 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:05:31 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_cut_pour1(t_structpf pf, va_list ap)
{
	if (pf.nb1 > 0 && (pf.flagnb1 == 1 || pf.flagnb1 == 0))
		pf = ft_put_space_or_0(pf);
	if (pf.nb1 > 0 && pf.flagnb1 == -1)
		pf = ft_put_space_or_0(pf);
	va_arg(ap, int);
	return (pf);
}

t_structpf	ft_cut_pour2(t_structpf pf, va_list ap)
{
	pf.str[pf.tempi] = '0';
	va_arg(ap, int);
	pf.tempi++;
	pf.nb1--;
	if (pf.nb1 > 0 && pf.flagnb1 == -1)
		pf = ft_put_space_or_0(pf);
	return (pf);
}

t_structpf	ft_cut_pour3(t_structpf pf, va_list ap)
{
	pf.nb1--;
	if (pf.nb1 > 0 && (pf.flagnb1 == 1 || pf.flagnb1 == 0))
		pf = ft_put_space_or_0(pf);
	pf.str[pf.tempi] = '0';
	va_arg(ap, int);
	pf.tempi++;
	return (pf);
}

t_structpf	ft_cut_pour4(t_structpf pf)
{
	if (pf.nb1 > 0 && (pf.flagnb1 == 1 || pf.flagnb1 == 0))
		pf = ft_put_space_or_0(pf);
	if (pf.nb1 > 0 && pf.flagnb1 == -1)
		pf = ft_put_space_or_0(pf);
	return (pf);
}

t_structpf	ft_write_pour_nb(t_structpf pf, va_list ap, int lenap)
{
	if (pf.nb2true == 1 && pf.nb2 == 0 && pf.flagnb1 == 0 && pf.flag != '%')
		pf.flagnb1 = 1;
	if ((pf.flag == 'x' || pf.flag == 'X' || pf.flag == 'i' || pf.flag == 'u')
			&& pf.nb2true == 1 && ft_check_ap(ap))
		return (ft_cut_pour1(pf, ap));
	if (pf.flagnb1 == -1 && pf.flag == 'u' && lenap == 0)
		return (ft_cut_pour2(pf, ap));
	if (pf.flag == 'u' && lenap == 0)
		return (ft_cut_pour3(pf, ap));
	if (pf.flagnb1 == 0 && pf.nb2true == 1 && pf.flag != '%')
		pf.flagnb1 = 1;
	if (ft_check_ap(ap) == 1 && pf.nb2true == 1 && pf.flag == 'd')
		return (ft_cut_pour4(pf));
	pf.nb1 = pf.nb1 - lenap;
	if (pf.nb1 > 0 && (pf.flagnb1 == 1 || pf.flagnb1 == 0))
		pf = ft_put_space_or_0(pf);
	pf = ft_write_pour(pf, ap, lenap);
	if (pf.nb1 > 0 && pf.flagnb1 == -1)
		pf = ft_put_space_or_0(pf);
	return (pf);
}
