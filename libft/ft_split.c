/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:41:48 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 13:45:17 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_delimited(char const *string, char c)
{
	char			prev_is_del;
	unsigned int	seg_count;
	unsigned int	i;

	if (!string)
		return (0);
	i = 0;
	seg_count = 0;
	prev_is_del = -1;
	while (string[i])
		if (string[i++] == c)
		{
			seg_count += (prev_is_del == 0 && i != 0) ? 1 : 0;
			prev_is_del = 1;
		}
		else
			prev_is_del = 0;
	seg_count += (prev_is_del == 0) ? 1 : 0;
	return (seg_count);
}

static char			**ft_split_core(char ***tab, char const *s, char c)
{
	unsigned int	sub_str_lenght;
	unsigned int	i;

	i = 0;
	if (!(*tab = ft_calloc((ft_count_delimited(s, c) + 1), sizeof(char *))))
		return (NULL);
	while (s && *s)
		if (*s != c)
		{
			sub_str_lenght = 0;
			while (*s != c && *s)
			{
				sub_str_lenght++;
				s++;
			}
			if (!((*tab)[i] = malloc((sub_str_lenght + 1) * sizeof(char))))
				return (NULL);
			ft_strlcpy((*tab)[i++], s - sub_str_lenght, (sub_str_lenght + 1));
		}
		else
			s++;
	(*tab)[i] = NULL;
	return (*tab);
}

char				**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	tab = NULL;
	if (!ft_split_core(&tab, s, c))
	{
		i = 0;
		while (tab[i] != NULL || tab[i] != 0)
			free(tab[i++]);
		free(tab);
		return (NULL);
	}
	return (tab);
}
