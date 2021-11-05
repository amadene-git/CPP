# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 17:22:03 by admadene          #+#    #+#              #
#    Updated: 2021/10/09 16:37:03 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= BraaaaaiiiinnnzzZ

SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS	= ${SRCS:.cpp=.o}

HEADER	= Zombie.hpp

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:
			${CC}  ${FLAGS} -I . -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS} ${HEADER}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean :
			rm -rf ${OBJS}
fclean :	clean
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean
