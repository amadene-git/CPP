# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 17:22:03 by admadene          #+#    #+#              #
#    Updated: 2021/06/30 18:50:55 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ZombieHorde

SRCS	= main.cpp Zombie.cpp ZombieHorde.cpp 

HEADER	= Zombie.hpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:
			${CC}  ${FLAGS} -I . -c $< -o ${<:.cpp=.o}


all		:	${NAME}

${OBJS}	:	${HEADER}	

${NAME}	:	${OBJS} ${HEADER}
				${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean 	:
			rm -rf ${OBJS}
fclean 	:	clean
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean
