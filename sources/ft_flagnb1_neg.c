/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flagnb1_neg.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:17:36 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:17:52 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int			ft_flagnb1_neg(const char *format, t_structpf pf)
{
	while (format[pf.i] == '0')
		pf.i++;
	if (format[pf.i] == '-')
		return (1);
	return (0);
}
