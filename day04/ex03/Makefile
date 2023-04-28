NAME = Test
EXT = cpp
H_EXT = hpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER_DIR = header
HEADER_FILES = AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp
HEADER = $(HEADER_FILES:%.${H_EXT}=${HEADER_DIR}/%.${H_EXT})
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
	rm -f ${OBJ}

fclean : 
	rm -f ${NAME}
	rm -f ${OBJ}

re : fclean all

.PHONY : clean fclean re FORCE
