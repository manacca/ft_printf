/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strfull.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/04 11:51:52 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 12:50:29 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

t_structpf	ft_strfull(t_structpf pf)
{
	ft_putstr_pf(pf.str, pf.tempi);
	free(pf.str);
	pf.iover = pf.tempi + pf.iover;
	pf.tempi = 0;
	pf.str = (char *)ft_calloc(sizeof(char *), 15000);
	return (pf);
}
