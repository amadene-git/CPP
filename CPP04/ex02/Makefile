# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:17:06 by admadene          #+#    #+#              #
#    Updated: 2021/10/18 15:33:54 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Abstract_Animal

SRCS	= main.cpp A_Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HEADER	= A_Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:
			${CC}  ${FLAGS} -I . -c $< -o ${<:.cpp=.o}

all:	${NAME}

${OBJS}	:	${HEADER}

${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean :
			rm -rf ${OBJS}
fclean :	clean
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean
