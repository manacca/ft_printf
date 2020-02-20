/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_write_pour.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 12:49:30 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:32:48 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_write_pour(t_structpf pf, va_list ap, int lenap)
{
	if (pf.flag == 's')
		pf = ft_flag_s(pf, ap, lenap);
	else if (pf.flag == 'd' || pf.flag == 'i')
		pf = (ft_flag_d_i(pf, ap, lenap));
	else if (pf.flag == 'x' || pf.flag == 'X')
		pf = (ft_flag_x(pf, ap, lenap));
	else if (pf.flag == 'c' || pf.flag == '%')
		pf = (ft_flag_c_pour(pf, ap, lenap));
	else if (pf.flag == 'u')
		pf = ft_flag_u(pf, ap, lenap);
	else if (pf.flag == 'p')
		pf = ft_flag_p(pf, ap, lenap);
	if (pf.apneg == -1)
		pf.tempi--;
	return (pf);
}
