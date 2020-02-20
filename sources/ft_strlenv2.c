/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlenv2.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 15:20:50 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:21:00 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

size_t	ft_strlenv2(const char *string)
{
	size_t len;

	len = 0;
	if (!string)
		len = 6;
	else
	{
		while (string[len])
			len++;
	}
	return (len);
}
