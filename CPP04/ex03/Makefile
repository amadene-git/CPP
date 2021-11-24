NAME = Materia

CC = clang++
CC_FLAGS =  -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow #-Wfatal-errors -Wpedantic -Wconversion 

SRCS = main.cpp    AMateria.cpp  Character.cpp Cure.cpp  Ice.cpp  MateriaSource.cpp ##42main.cpp 

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
