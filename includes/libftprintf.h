/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libftprintf.h                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manaccac <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/04 10:35:29 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:42:27 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef	struct	s_structpf
{
	char	*str;
	int		i;
	int		tempi;
	int		iover;
	char	flag;
	int		flagnb1;
	int		nb1;
	int		nb2;
	int		nb2true;
	int		apneg;
}				t_structpf;

t_structpf		ft_ap_is_neg(t_structpf pf, va_list ap);
t_structpf		ft_write(const char *format, t_structpf pf, va_list ap);
int				ft_lenap(const char *format, int i, va_list ap);
size_t			ft_strlenv2(const char *string);
int				ft_takenb(const char *format, int i, int nb, va_list ap);
t_structpf		ft_takenb1(const char *format, t_structpf pf, va_list ap);
int				ft_flagnb1_neg(const char *format, t_structpf pf);
t_structpf		ft_skip(const char *format, t_structpf pf);
int				ft_format(const char *format, int i);
t_structpf		ft_flag_p(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_flag_u(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_flag_c_pour(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_flag_x(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_flag_d_i(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_flag_s(t_structpf pf, va_list ap, int lenap);
int				ft_check_ap(va_list ap);
void			ft_putstr_pf(char *str, int len);
char			*ft_itoa_base_unsigned_long(unsigned long nb, char *tab);
char			*ft_itoa_unsigned(unsigned int n);
char			*ft_itoa_base(long nb, char *tab);
int				ft_neg(va_list ap);
t_structpf		ft_write_pour_accur(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_write_accur(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_write_pour_nb(t_structpf pf, va_list ap, int lenap);
char			*ft_itoav2(int n);
t_structpf		ft_put_0(t_structpf pf);
t_structpf		ft_write_pour(t_structpf pf, va_list ap, int lenap);
t_structpf		ft_put_space_or_0(t_structpf pf);
int				ft_len_unsigned(unsigned int nb);
int				ft_len(long nb);
int				ft_lenp(unsigned long nb);
t_structpf		ft_strfull(t_structpf pf);
int				ft_printf(const char *format,
				...) __attribute__((format(printf,1,2)));
t_structpf		ft_flag(const char *format, t_structpf pf, va_list ap);

#endif
