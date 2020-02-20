/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_c_pour.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:24:21 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:32:02 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_flag_c_pour(t_structpf pf, va_list ap, int lenap)
{
	if (pf.flag == 'c')
	{
		pf.str[pf.tempi] = va_arg(ap, int);
		pf.tempi++;
		lenap--;
	}
	if (pf.flag == '%')
	{
		pf.str[pf.tempi] = '%';
		pf.tempi++;
		lenap--;
	}
	return (pf);
}
