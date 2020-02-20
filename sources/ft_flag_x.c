/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_x.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:20:22 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:31:52 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_flag_x(t_structpf pf, va_list ap, int lenap)
{
	char	*tomalloc;
	int		i;

	i = 0;
	if (pf.flag == 'x')
		tomalloc = ft_itoa_base(va_arg(ap, long), "0123456789abcdef");
	if (pf.flag == 'X')
		tomalloc = ft_itoa_base(va_arg(ap, long), "0123456789ABCDEF");
	while (lenap != 0)
	{
		pf.str[pf.tempi] = tomalloc[i];
		i++;
		pf.tempi++;
		lenap--;
	}
	free(tomalloc);
	return (pf);
}
