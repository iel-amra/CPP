NAME = Test
EXT = cpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER = header/Weapon.hpp header/HumanA.hpp header/HumanB.hpp
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

print :
	echo ${SRC}
	echo ${OBJ}

${NAME} : ${OBJ}
	g++ $(FLAGS) $(OBJ) ${LIBFT} -o $(NAME)

${OBJ_DIR}/%.o : ${SRC_DIR}/%.${EXT} ${HEADER} ${H_HEADER} | ${OBJ_DIR}
	g++ $(FLAGS) -c $< -o $@

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
