# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 13:50:26 by tferrieu          #+#    #+#              #
#    Updated: 2019/04/15 15:10:24 by tferrieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

AR		=	ar rc

SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_pow.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_splitcharset.c \
			ft_root.c \
			ft_table_to_list.c \
			ft_putlst.c \
			ft_strjoin_free.c \
			get_next_line.c \
			ft_itobase.c \
			ft_strmake.c \
			ft_strset.c \
			ft_strnset.c \
			ft_strndup.c \
			biggest_int.c \
			ft_getpow.c \
			ft_getbase.c \
			ft_abs.c \
			ft_printf.c \
			parsing.c \
			convert_cs.c \
			convert_float.c \
			convert_int.c \
			convert_oux.c \
			convert_p.c \
			scanning.c

OBJ		=	$(SRC:.c=.o)

NAME	=	libft.a

CFLAGS	=	-Wall -Werror -Wextra

all :		$(NAME)

$(NAME) :	$(OBJ) libft.h
			$(AR) $(NAME) $(OBJ)

clean :
			@/bin/rm -Rf $(OBJ)

fclean :	clean
			@/bin/rm -Rf $(NAME)

re :		fclean all
