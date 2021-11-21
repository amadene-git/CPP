# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 20:02:10 by admadene          #+#    #+#              #
#    Updated: 2021/11/21 20:02:54 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = c++
CC_FLAGS =  -Wall -Wextra -Werror -std=c++98 #-Wfatal-errors -Wpedantic -Wconversion -Wshadow

SRCS = $(wildcard *.cpp)

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
