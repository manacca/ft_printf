/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_format.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:15:28 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:15:37 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_format(const char *format, int i)
{
	if (format[i] == 'c' || format[i] == 's' || format[i] == 'p' ||
			format[i] == 'd' || format[i] == 'i' || format[i] == 'u' ||
			format[i] == 'x' || format[i] == 'X' || format[i] == '%')
		return (1);
	return (0);
}
