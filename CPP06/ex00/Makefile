NAME = a.out

CC = c++
CC_FLAGS =  -Wall -Wextra -Werror -std=c++98 #-Wfatal-errors -Wpedantic -Wconversion -Wshadow

SRCS = main.cpp

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


test	: all
			./${NAME} 0
			@echo
			./${NAME} 42
			@echo
			./${NAME} '*'
			@echo
			./${NAME} 127
			@echo
			./${NAME} 128
			@echo
			./${NAME} 2147483648
			@echo
			./${NAME} -2147483648
			@echo
			./${NAME} -2147483649
			@echo
			./${NAME} 18446744073709551616
			@echo
			./${NAME} inf
			@echo
			./${NAME} inff
			@echo
			./${NAME} -inf
			@echo
			./${NAME} -inff
			@echo
			./${NAME} 100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
			@echo
			./${NAME} 10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
			@echo
			./${NAME} 1234.1234
			@echo
			./${NAME} 12.34e-13
			@echo
			./${NAME} 12.34e+13
			@echo
			./${NAME} nan
			@echo
			./${NAME} nanf
			@echo
			./${NAME} cudcbdicbf

.PHONY : all clean fclean re
