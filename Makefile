##
## Makefile for  in /home/rendu
## 
## Made by Koszyczek Laurent
## Login   <koszyc_l@epitech.net>
## 
## Started on  Mon Feb  3 18:50:11 2014 Koszyczek Laurent
## Last update Fri Feb 28 11:57:28 2014 Koszyczek Laurent
##

CC	=	g++

RM	=	rm -f

CFLAGS 	+=	-Wextra -Wall

SRCS 	=	main.cpp \
		AbstractVM.cpp

OBJS 	= 	$(SRCS:.cpp=.o)

NAME 	= 	avm

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all
