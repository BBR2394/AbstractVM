
CC	=	clang++

NAME	=	avm	

SRC	=	main.cpp	\
		ObjRead.cpp	\
		Operand.cpp	\
		ProcessUnit.cpp

OBJ	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
