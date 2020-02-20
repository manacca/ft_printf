/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:23:01 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:37:44 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_cut_write1(t_structpf pf, va_list ap, int lenap)
{
	pf.nb1++;
	pf = ft_write_pour_nb(pf, ap, lenap);
	return (pf);
}

t_structpf	ft_cut_write2(t_structpf pf, va_list ap)
{
	va_arg(ap, int);
	pf.str[pf.tempi] = '0';
	pf.tempi++;
	return (pf);
}

t_structpf	ft_cut_write3(t_structpf pf, va_list ap, int lenap)
{
	if (pf.nb1 == 0 && pf.nb2 == 0 && (pf.flag == 'x' || pf.flag == 'X')
			&& ft_check_ap(ap))
	{
		va_arg(ap, int);
		return (pf);
	}
	if (pf.nb1 == 0 && pf.nb2 == 0 && (pf.flag == 'd' || pf.flag == 'i')
		&& ft_check_ap(ap))
		return (pf);
	if (pf.nb1 == 0 && pf.nb2 == 0)
		return (ft_write_pour(pf, ap, lenap));
	if (pf.nb2 == 0)
		return (ft_write_pour_nb(pf, ap, lenap));
	if (pf.nb1 == 0)
		return (ft_write_accur(pf, ap, lenap));
	else
		return (ft_write_pour_accur(pf, ap, lenap));
}

t_structpf	ft_write(const char *format, t_structpf pf, va_list ap)
{
	int		lenap;

	lenap = ft_lenap(format, pf.i, ap);
	if (pf.flag == 'p' && (pf.nb2 == 0 && pf.nb2true == 1) && ft_check_ap(ap))
		return (ft_cut_write1(pf, ap, lenap));
	if (pf.nb2 == 0 && pf.nb2true == 1 && pf.flag == 's')
		return (ft_write_pour_accur(pf, ap, lenap));
	if (pf.nb1 == 0 && pf.nb2 == 0 && (pf.flag == 'd' || pf.flag == 'u' ||
				pf.flag == 'x' || pf.flag == 'X'
				|| pf.flag == 'i') && pf.nb2true != 1 && ft_check_ap(ap))
		return (ft_cut_write2(pf, ap));
	return (ft_cut_write3(pf, ap, lenap));
}
