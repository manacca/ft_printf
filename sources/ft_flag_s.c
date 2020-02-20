/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flag_s.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:12:32 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 14:31:26 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void		*ft_memcpy1(void *dst, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;
	int					i;

	i = 0;
	if (!src)
	{
		src = ft_strdup("(null)");
		i = 1;
	}
	src2 = src;
	dst2 = dst;
	while (n-- > 0)
		*dst2++ = *src2++;
	if (i == 1)
		free((void *)src);
	return (dst);
}

t_structpf	ft_flag_s(t_structpf pf, va_list ap, int lenap)
{
	char	*tomalloc;
	int		i;

	i = 0;
	if (!(tomalloc = malloc(sizeof(char *) + lenap)))
		return (pf);
	tomalloc = ft_memcpy1(tomalloc, va_arg(ap, char *), lenap);
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
