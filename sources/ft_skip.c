/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_skip.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:16:29 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:16:38 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_skip(const char *format, t_structpf pf)
{
	while (format[pf.i] == '0' || format[pf.i] == '-')
		pf.i++;
	while (format[pf.i] == '-' || format[pf.i] == '0')
		pf.i++;
	while (format[pf.i] >= '0' && format[pf.i] <= '9')
		pf.i++;
	return (pf);
}
