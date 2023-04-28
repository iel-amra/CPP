NAME = Test
EXT = cpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp Fixed.cpp Point.cpp
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER = header/Fixed.hpp
HEADER_DIR = header
FLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

print :
	echo ${SRC}
	echo ${OBJ}

${NAME} : ${OBJ}
	c++ $(FLAGS) $(OBJ) ${LIBFT} -o $(NAME)

${OBJ_DIR}/%.o : ${SRC_DIR}/%.${EXT} ${HEADER} | ${OBJ_DIR}
	c++ $(FLAGS) -I ${HEADER_DIR} -c $< -o $@

FORCE :

${OBJ_DIR} :
	mkdir $@

clean :
	rm -f ${OBJ}

fclean : 
	rm -f ${NAME}
	rm -f ${OBJ}

re : fclean all

.PHONY : clean fclean re FORCE
