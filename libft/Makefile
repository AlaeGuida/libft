# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguida <aguida@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:51:57 by aguida            #+#    #+#              #
#    Updated: 2022/10/07 17:50:02 by aguida           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isalnum.c ft_isprint.c  ft_memcmp.c  ft_strlcat.c  ft_strncmp.c  ft_atoi.c  ft_isalpha.c \
					ft_memcpy.c  ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  ft_tolower.c  ft_bzero.c  ft_isascii.c \
					ft_memmove.c  ft_strlen.c  ft_strrchr.c  ft_toupper.c  ft_isdigit.c  ft_memchr.c  ft_memset.c \
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re
