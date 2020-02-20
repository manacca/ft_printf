/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_d_i.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:17:11 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:31:38 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_flag_d_i(t_structpf pf, va_list ap, int lenap)
{
	char	*tomalloc;
	int		i;

	i = 0;
	if (pf.flagnb1 == 1 && pf.apneg != -1)
		tomalloc = ft_itoa(va_arg(ap, int));
	else
		tomalloc = ft_itoav2(va_arg(ap, int));
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
