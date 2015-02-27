
CC	=	clang++

NAME	=	avm	

SRC	=	MainDeTest.cpp	\
		ObjRead.cpp	\
		Operand.cpp	\
		ProcessUnit.cpp	\
		Exception.cpp

OBJ	=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
