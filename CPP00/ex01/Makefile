# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:17:06 by admadene          #+#    #+#              #
#    Updated: 2021/10/25 21:44:25 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

SRCS	= main.cpp Phonebook.cpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:
			${CC}  ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean :
			rm -rf ${OBJS}
fclean :	clean
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean
