/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_neg.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/08 11:21:44 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 13:50:07 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_neg(va_list ap)
{
	int		neg;
	va_list ad;

	va_copy(ad, ap);
	neg = va_arg(ad, int);
	va_end(ad);
	if (neg < 0)
		return (1);
	return (0);
}
