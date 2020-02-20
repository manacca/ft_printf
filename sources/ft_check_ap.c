/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_ap.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:07:22 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:08:09 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int			ft_check_ap(va_list ap)
{
	va_list ad;
	int		check;

	va_copy(ad, ap);
	check = va_arg(ad, int);
	va_end(ad);
	if (check == 0)
		return (1);
	return (0);
}
