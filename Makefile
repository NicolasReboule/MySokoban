##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	$(wildcard *.c)

SRC_TEST=	truc.c \
			tests/test_truc.c

CFLAGS	=	-W -Werror -Wall -Wextra -g

LFLAGS	= 	-L lib/ -lmy

NFLAGS = -lncurses

CRIFLAGS =	-l criterion --coverage

IFLAGS = 	-I include/

NAME_TEST =	units_tests

NAME	=	my_sokoban

all:
	make -C lib/my all
	gcc -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS) $(NFLAGS)

tests_run:
	make -C lib/my all
	gcc -o $(NAME_TEST) $(SRC_TEST) $(IFLAGS) $(LFLAGS) $(CFLAGS) $(CRIFLAGS)
	./$(NAME_TEST)

clean:
	make -C lib/my clean
	rm -f *~
	rm -f tests/*~
	rm -f *gc*
fclean:
	make -C lib/my fclean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

re:     fclean all
	make -C lib/my re
