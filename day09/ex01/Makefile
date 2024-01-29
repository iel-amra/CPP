NAME = RPN
EXT = cpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp RPN.cpp
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER_DIR = header
HEADER_FILES = RPN.hpp
HEADER = $(HEADER_FILES:%=${HEADER_DIR}/%)
FLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}


${NAME} : ${OBJ}
	c++ $(FLAGS) $(OBJ) ${LIBFT} -o $(NAME)

${OBJ_DIR}/%.o : ${SRC_DIR}/%.${EXT} ${HEADER} | ${OBJ_DIR}
	c++ $(FLAGS) -I ${HEADER_DIR} -c $< -o $@

FORCE :

${OBJ_DIR} :
	mkdir $@

clean :
	rm -rf ${OBJ_DIR}

fclean : 
	rm -f ${NAME}
	rm -rf ${OBJ_DIR}

re : fclean all

.PHONY : clean fclean re FORCE
