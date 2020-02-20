/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_len.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 14:54:28 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 09:48:51 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_len(char *str)
{
	int	i;
	int dup;

	dup = 0;
	i = 0;
	if (!str)
	{
		str = ft_strdup("(null)");
		dup = 1;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	if (dup == 1)
		free(str);
	return (i);
}
