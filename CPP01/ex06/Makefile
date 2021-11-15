# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 17:22:03 by admadene          #+#    #+#              #
#    Updated: 2021/11/15 14:43:12 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= karenFilter

SRCS	= main.cpp Karen.cpp

HEADER	= Karen.hpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:	
			${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${OBJS}	:	${HEADER}

${NAME}	:	${OBJS}
			${CC}  ${FLAGS} -o ${NAME} ${OBJS}

clean :
			rm -rf ${OBJS}
fclean :	clean 
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean

