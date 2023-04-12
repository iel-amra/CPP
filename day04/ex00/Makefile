NAME = Test
EXT = cpp
H_EXT = hpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER_DIR = header
HEADER_FILES = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
HEADER = $(HEADER_FILES:%.${H_EXT}=${HEADER_DIR}/%.${H_EXT})
FLAGS = -Wall -Wextra -Werror -Wno-pmf-conversions

all : ${NAME}

${NAME} : ${OBJ}
	g++ $(FLAGS) $(OBJ) ${LIBFT} -o $(NAME)

${OBJ_DIR}/%.o : ${SRC_DIR}/%.${EXT} ${HEADER} | ${OBJ_DIR}
	g++ $(FLAGS) -I ${HEADER_DIR} -c $< -o $@

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
