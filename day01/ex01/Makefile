NAME = Test
EXT = cpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp Zombie.cpp zombieHorde.cpp  
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER = 
H_HEADER = header/Zombie.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

print :
	echo ${SRC}
	echo ${OBJ}

${NAME} : ${OBJ}
	c++ $(FLAGS) $(OBJ) ${LIBFT} -o $(NAME)

${OBJ_DIR}/%.o : ${SRC_DIR}/%.${EXT} ${HEADER} ${H_HEADER} | ${OBJ_DIR}
	c++ $(FLAGS) -include ${H_HEADER} -c $< -o $@

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
