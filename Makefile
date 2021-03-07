##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	$(wildcard *.c)

SRC_TEST=	map.c \
			boxes.c \
			check_lose.c \
			check_void.c \
			map_errors.c \
			player.c \
			print.c \
			sokoban.c \
			tests/tests_sokoban_map.c \
			tests/tests_sokoban_player.c \
			tests/tests_sokoban_boxes.c \
			tests/tests_sokoban_check_lose.c

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
	gcc -o $(NAME_TEST) $(SRC_TEST) $(IFLAGS) $(LFLAGS) $(CFLAGS) $(CRIFLAGS) $(NFLAGS)
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
