# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:17:06 by admadene          #+#    #+#              #
#    Updated: 2021/10/17 13:44:32 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Fixed

SRCS	= main.cpp Fixed.cpp

HEADER = Fixed.hpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:
			${CC}  ${FLAGS} -I . -c $< -o ${<:.cpp=.o}

all:	${NAME}

${OBJS}:	${HEADER}

${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean :
			rm -rf ${OBJS}
fclean :	clean
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean
