/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_u.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:26:46 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:32:13 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_flag_u(t_structpf pf, va_list ap, int lenap)
{
	char	*tomalloc;
	int		i;

	i = 0;
	tomalloc = ft_itoa_unsigned(va_arg(ap, unsigned int));
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
