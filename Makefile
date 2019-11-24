# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: auboudie <auboudie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 17:57:15 by auboudie          #+#    #+#              #
#    Updated: 2018/12/20 18:18:15 by auboudie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

CFLAGS	+= 	-Wall \
			-Wextra \
			-Werror

CC		= 	gcc

CCLIB	= 	ar rcs

SRCS	= 	./ft_atoi.c \
			./ft_bzero.c \
			./ft_char_to_skip.c \
			./ft_countword.c \
			./ft_dlst_newlist.c \
			./ft_dlst_print_dlst_char.c \
			./ft_free_tab.c \
			./ft_isalnum.c \
			./ft_isalpha.c \
			./ft_isascii.c \
			./ft_isdigit.c \
			./ft_islower.c \
			./ft_isprint.c \
			./ft_issign.c \
			./ft_isspace.c \
			./ft_isupper.c \
			./ft_itoa.c \
			./ft_lst_count_link.c \
			./ft_lst_del_content.c \
			./ft_lst_index_link.c \
			./ft_lst_last_link.c \
			./ft_lst_print_lst_char.c \
			./ft_lst_pushback.c \
			./ft_lstadd.c \
			./ft_lstdel.c \
			./ft_lstdelone.c \
			./ft_lstiter.c \
			./ft_lstmap.c \
			./ft_lstnew.c \
			./ft_memalloc.c \
			./ft_memccpy.c \
			./ft_memchr.c \
			./ft_memcmp.c \
			./ft_memcpy.c \
			./ft_memdel.c \
			./ft_memmove.c \
			./ft_memset.c \
			./ft_print_char_tab.c \
			./ft_putchar.c \
			./ft_putchar_fd.c \
			./ft_putendl.c \
			./ft_putendl_fd.c \
			./ft_putnbr.c \
			./ft_putnbr_fd.c \
			./ft_putnbrendl.c \
			./ft_putstr.c \
			./ft_putstr_fd.c \
			./ft_return_free_tab.c \
			./ft_strcat.c \
			./ft_strchr.c \
			./ft_strclr.c \
			./ft_strcmp.c \
			./ft_strcpy.c \
			./ft_strdel.c \
			./ft_strdup.c \
			./ft_strequ.c \
			./ft_striter.c \
			./ft_striteri.c \
			./ft_strjoin.c \
			./ft_strlcat.c \
			./ft_strlen.c \
			./ft_strlendelim.c \
			./ft_strmap.c \
			./ft_strmapi.c \
			./ft_strncat.c \
			./ft_strncmp.c \
			./ft_strncpy.c \
			./ft_strndup.c \
			./ft_strnequ.c \
			./ft_strnew.c \
			./ft_strnstr.c \
			./ft_strrchr.c \
			./ft_strrev.c \
			./ft_strsplit.c \
			./ft_strstr.c \
			./ft_strsub.c \
			./ft_strtrim.c \
			./ft_swap.c \
			./ft_tolower.c \
			./ft_toupper.c

OBJS	= 	$(SRCS:.c=.o)

RM		= 	rm -Rf

all		: 	$(NAME)

$(NAME)	: 	$(OBJS)
			$(CCLIB) $@ $?

%.o		:	%.c libft.h
			$(CC) $(CFLAGS) -o $@ -c $<

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
