/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takenb.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:19:47 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:19:57 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_takenb(const char *format, int i, int nb, va_list ap)
{
	if (format[i] == '*')
		nb = va_arg(ap, int);
	else
		nb = ft_atoi_v2(format, i);
	return (nb);
}
