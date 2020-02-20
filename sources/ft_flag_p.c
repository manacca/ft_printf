/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_p.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:28:07 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:34:52 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_flag_p(t_structpf pf, va_list ap, int lenap)
{
	char	*tomalloc;
	int		i;

	i = 0;
	if (pf.flag == 'p' && (pf.nb2 == 0 && pf.nb2true == 1) && ft_check_ap(ap))
	{
		pf.str[pf.tempi] = '0';
		pf.tempi++;
		pf.str[pf.tempi] = 'x';
		pf.tempi++;
		va_arg(ap, int);
		return (pf);
	}
	tomalloc = ft_itoa_base_unsigned_long(va_arg(ap, unsigned long),
		"0123456789abcdef");
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
