/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lenap.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:21:58 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:29:28 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_lenap(const char *format, int i, va_list ap)
{
	va_list ad;
	int		len;

	len = 0;
	va_copy(ad, ap);
	if (format[i] == '%' || format[i] == 'c')
		len = 1;
	else if (format[i] == 's')
		len = ft_strlenv2(va_arg(ad, char *));
	else if (format[i] == 'p')
		len = ft_lenp(va_arg(ad, unsigned long));
	else if (format[i] == 'd' || format[i] == 'i')
		len = ft_len(va_arg(ad, int));
	else if (format[i] == 'u')
		len = ft_len_unsigned(va_arg(ad, int));
	else if (format[i] == 'x' || format[i] == 'X')
		len = ft_taille_hex(va_arg(ad, int));
	va_end(ad);
	return (len);
}
