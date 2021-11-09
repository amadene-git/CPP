# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 17:22:03 by admadene          #+#    #+#              #
#    Updated: 2021/06/30 19:19:44 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Brain

SRCS	= main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp

OBJS	= ${SRCS:.cpp=.o}

HEADER	= HumanA.hpp HumanB.hpp Weapon.hpp

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:	
			${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			${CC}  ${FLAGS} -o ${NAME} ${OBJS}

${OBJS}:	${HEADER}

clean :
			rm -rf ${OBJS}
fclean :	clean
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean

