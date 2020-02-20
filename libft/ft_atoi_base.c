/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/12 11:33:28 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:29:18 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		error(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
			(base[i] >= 9 && base[i] <= 13))
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		get_nb(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		test(char *str, char *base, int i)
{
	int j;

	j = 0;
	while (base[j] && (base[j] != str[i]))
		j++;
	if (base[j] == str[i])
		return (1);
	else
		return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int res;
	int negative;
	int base_length;

	if (error(base) == 0)
		return (0);
	i = 0;
	base_length = 0;
	negative = 1;
	while (base[base_length])
		++base_length;
	while (str[i] != '\0' && ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))))
		i++;
	if (str[i] == '-')
		negative = negative * -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	res = 0;
	while (str[i] && test(str, base, i))
	{
		res = (res * base_length) + (get_nb(str[i], base));
		i++;
	}
	return (res * negative);
}
