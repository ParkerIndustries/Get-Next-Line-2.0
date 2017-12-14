# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xxxxxxxx <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 11:42:47 by xxxxxxxx          #+#    #+#              #
#    Updated: 2017/12/13 15:39:14 by xxxxxxxx         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

CFLAGS += -I libft.h

LIBFT_SRC = ./ft_atoi.c \
./ft_add.c \
./ft_bzero.c \
./ft_countwords.c \
./ft_foreach.c \
./ft_isalnum.c \
./ft_isalpha.c \
./ft_isascii.c \
./ft_isblank.c \
./ft_isdigit.c \
./ft_islow.c \
./ft_isprint.c \
./ft_isspace.c \
./ft_isup.c \
./ft_itoa.c \
./ft_lenword.c \
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
./ft_multiply.c \
./ft_putchar.c \
./ft_putchar_fd.c \
./ft_putendl.c \
./ft_putendl_fd.c \
./ft_putnbr.c \
./ft_putnbr_fd.c \
./ft_putstr.c \
./ft_putstr_error.c \
./ft_putstr_fd.c \
./ft_realloc.c \
./ft_realloc_safe.c \
./ft_strcat.c \
./ft_strchr.c \
./ft_strclr.c \
./ft_strcmp.c \
./ft_strcpy.c \
./ft_strcspn.c \
./ft_strdel.c \
./ft_strdup.c \
./ft_strequ.c \
./ft_striter.c \
./ft_striteri.c \
./ft_strjoin.c \
./ft_strlcat.c \
./ft_strlen.c \
./ft_strmap.c \
./ft_strmapi.c \
./ft_strncat.c \
./ft_strncmp.c \
./ft_strncpy.c \
./ft_strnequ.c \
./ft_strnew.c \
./ft_strnstr.c \
./ft_strpbrk.c \
./ft_strrchr.c \
./ft_strsplit.c \
./ft_strstr.c \
./ft_strsub.c \
./ft_strtrim.c \
./ft_substract.c \
./ft_tolower.c \
./ft_toupper.c \

LIBFT_OBJ = $(subst .c,.o, $(LIBFT_SRC))

all: $(NAME)

%.o: %.c \
	(GCC) $(CFLAGS) -c $? -o $@

$(NAME): $(LIBFT_OBJ)
	/bin/rm -f $(NAME)
	ar rcs $(NAME) $(LIBFT_OBJ)
	@echo "\033[32m[ 100% ] Compilation Done\033[0m"

re: fclean all

clean:
	/bin/rm -f $(LIBFT_OBJ)
	@echo "\033[32m[ 100% ] Removed Objects Files\033[0m"

fclean: clean
	/bin/rm -f $(NAME)
