## Makefile for AbstractVM in /home/baptiste/rendu/cpp_abstractvm
##
## Made by bertra_l
## Login   <baptiste.bertrand-rapello@epitech.net>
##
## Started on  Sun Mar  1 22:58:10 2015 Bertrand-Rapello Baptiste 
## Last update Sun Mar  1 22:59:21 2015 Bertrand-Rapello Baptiste
##   
CC	=	clang++

NAME	=	avm	

SRC	=	main.cpp	\
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
