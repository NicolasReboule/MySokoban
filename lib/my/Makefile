##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC		=	$(wildcard *.c)

OBJ     =	$(SRC:.c=.o)

NAME    =	libmy.a

all:    $(OBJ)
	ar rc libmy.a	$(OBJ)
	cp libmy.a ./../../lib
	cp my.h ./../../include

clean:
	rm -f $(OBJ)
	rm -f *~
fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all