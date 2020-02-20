# **************************************************************************** #
#                                VARIABLES                                     #
# **************************************************************************** #

HEADER        =                    includes/libftprintf.h

LIB            =                    libft.a

LIBS        =                    libft/libft.a

SRC_PATH    =                    sources

SRCS_NAME    =	ft_printf.c ft_strfull.c ft_flag.c ft_lenp.c ft_len.c\
				ft_len_unsigned.c ft_put_space_or_0.c ft_write_pour.c\
				ft_put_0.c\
				ft_itoav2.c ft_write_pour_nb.c ft_write_accur.c\
				ft_write_pour_accur.c ft_neg.c ft_itoa_base.c\
				ft_itoa_unsigned.c ft_itoa_base_unsigned_long.c\
				ft_putstr_pf.c ft_check_ap.c ft_flag_s.c ft_flag_d_i.c\
				ft_flag_x.c ft_flag_c_pour.c ft_flag_u.c ft_flag_p.c\
				ft_format.c ft_skip.c ft_flagnb1_neg.c ft_takenb1.c\
				ft_takenb.c ft_strlenv2.c ft_lenap.c ft_write.c\
				ft_ap_is_neg.c\


OBJS        =                     ${SRCS:.c=.o}

NAME        =                     libftprintf.a

RM            =                     rm -f

FLAGS         =                     -Wall -Wextra -Werror

SRCS         =                     $(addprefix $(SRC_PATH)/,$(SRCS_NAME))

# **************************************************************************** #
#                                REGLES                                        #
# **************************************************************************** #

all:                            $(LIB) PRINTF $(NAME)

%.o: %.c                         $(HEADER) $(LIBS)
	@echo "\033[0;32m[OK] \033[0m \033[0;33m Compiling:\033[0m" $<
	@gcc $(FLAGS) -I $(HEADER) -c $< -o $@

$(NAME):                        $(OBJS) $(HEADER)
	@cp libft/libft.a ./$(NAME)
	@echo "\x1b[36m\n[OK] \033[0m \x1b[35m Compiling Printf\033[0m"
	@ar rcs $(NAME) $(OBJS)

$(LIB):
	@$(MAKE) -C libft all

clean:
	@$(MAKE) -C libft clean
	@echo "\x1b[36m[OK] \033[0m \x1b[31m Removing File object\033[0m"
	@$(RM) $(OBJS)

fclean:                            clean
	@$(MAKE) -C libft fclean
	@echo "\x1b[36m[OK] \033[0m \x1b[31m Removing All\033[0m"
	@$(RM) $(NAME)

re:                                fclean all

PRINTF:
	@echo "__, ___      __, __, _ _, _ ___ __,"
	@echo "|_   |       |_) |_) | |\ |  |  |_ "
	@echo "|    |       |   | \ | | \|  |  |  "
	@echo "~    ~  ~~~~ ~   ~ ~ ~ ~  ~  ~  ~  "
	@echo ""

.PHONY:                         clean fclean
