/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/04 10:45:08 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 13:49:02 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_structpf	pf;

	if (!(pf.str = (char*)ft_calloc(sizeof(char *), 15000)))
		return (0);
	pf.i = 0;
	pf.tempi = 0;
	pf.iover = 0;
	va_start(ap, format);
	while (format[pf.i])
	{
		if (format[pf.i] == '%')
			pf = ft_flag(format, pf, ap);
		else
			pf.str[pf.tempi++] = format[pf.i];
		pf.i++;
		if (pf.tempi >= 14000)
			pf = ft_strfull(pf);
	}
	va_end(ap);
	ft_putstr_pf(pf.str, pf.tempi);
	free(pf.str);
	return (pf.tempi + pf.iover);
}
