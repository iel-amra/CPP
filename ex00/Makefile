NAME = megaphone
EXT = cpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = megaphone.cpp 
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER =
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

print :
	echo ${SRC}
	echo ${OBJ}

${NAME} : ${OBJ}
	g++ $(FLAGS) $(OBJ) ${LIBFT} -o $(NAME)

${OBJ_DIR}/%.o : ${SRC_DIR}/%.${EXT} | ${OBJ_DIR}
	g++ $(FLAGS) -c $< -o $@

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
