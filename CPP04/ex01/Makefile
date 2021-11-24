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

NAME	= Brain

CC = c++
CC_FLAGS =  -Wall -Wextra -Werror -std=c++98 #-Wfatal-errors -Wpedantic -Wconversion -Wshadow

SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
OBJS_DIR = ./objs
DEP = $(OBJS:%.o=%.d)
HEADER = -I .

all				: 	${NAME}
$(NAME) 		: 	$(OBJS)	
						@mkdir -p $(@D)
						$(CC) $(CC_FLAGS) $^ -o $@
-include $(DEP)
$(OBJS_DIR)/%.o	:	%.cpp
						@mkdir -p $(@D)
						$(CC) $(CC_FLAGS) ${HEADER} -MMD -c $< -o $@

clean	:
				rm -rf $(OBJS_DIR)
fclean	:	clean
				rm -rf ${NAME}
re		:	fclean
				make all

.PHONY : all clean fclean re