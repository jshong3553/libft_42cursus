#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 12:33:41 by jinhong           #+#    #+#              #
#    Updated: 2019/11/20 16:05:40 by jinhong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= libft.h
CC	= gcc
CCFLAGS	= -Wall -Wextra -Werror

SRC	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	  ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
	  ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
	  ft_strrchr.c ft_tolower.c ft_toupper.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_substr.c ft_split.c ft_strtrim.c

OBJ	= $(SRC:.c=.o)

B_SRC	= ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c\
	  ft_lstiter.c ft_lstclear.c

B_OBJ	= $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) -I$(HEADER) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:	$(B_OBJ)
	 $(CC) $(CCFLAGS) -I$(HEADER) -c $(B_SRC)
	 ar rc $(NAME) $(B_OBJ)
	 ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(B_OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all bonus
