NAME = my_sed
EXT = cpp
SRC_DIR = src
OBJ_DIR = obj
SRC_FILES = main.cpp 
SRC = $(SRC_FILES:%.${EXT}=${SRC_DIR}/%.${EXT})
OBJ = $(SRC:${SRC_DIR}/%.${EXT}=${OBJ_DIR}/%.o)
HEADER_DIR = header
HEADER = 
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

print :
	echo ${SRC}
	echo ${OBJ}

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
