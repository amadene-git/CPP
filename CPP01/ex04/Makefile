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

NAME	= replace

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= clang++


.cpp.o	:	
			${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}	:	${OBJS}
			${CC}  ${FLAGS} -o ${NAME} ${OBJS}

testclean:
			rm -rf test*

test	:	re testclean
				@echo
				@echo "wesh je sais pas ce qu'il m'arrive wesh mais je dis tout le temps wesh... wesh" > test1
				@echo "test1 ->"
				@cat test1
				./replace test1 wesh "bon alors"
				@echo "test1.replace ->"
				@cat test1.replace
#####################################################################################
				@echo
				@echo "j'aime pas les espaces ca sert a rien" > test2
				@echo "test2 ->"
				@cat test2
				./replace test2 " " "_"
				@echo "test2.replace ->"
				@cat test2.replace
#####################################################################################
				@echo
				touch test3
				@echo "test3 ->"
				@cat test3
				./replace test3 mdr ptdr
				@echo "test3.replace ->"
				@cat test3.replace
#####################################################################################
				@echo
				chmod -r test3
				./replace test3 mdr ptdr
				@echo
				./replace lolilol a b 
				@echo
				./replace
				@echo
				./replace test1 "pouet" ""
				@echo
				./replace test1 "" "pouet"
				@echo
				./replace test1 a b c

clean :
			rm -rf ${OBJS}
fclean :	clean 
			rm -rf ${NAME}
re		: fclean
			make all

.PHONY: all re clean fclean

