# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 15:50:27 by yadereve          #+#    #+#              #
#    Updated: 2023/10/29 15:25:33 by yadereve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strtrim.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_split.c \

OBJS = ${SRCS:.c=.o}

B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c\
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

B_OBJS = $(B:.c=.o)

all: ${NAME}

bonus: ${B_OBJS}
		@ar rcs ${NAME} ${B_OBJS}

$(NAME): ${OBJS}
		@ar rcs ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS} ${B_OBJS}

fclean:	clean
		@${RM} ${NAME}

re:		fclean all

.PHONY: all bonus clean fclean re
