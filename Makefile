##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/*.c

NAME	=	push_swap

all:
	gcc $(SRC) -o $(NAME)
	make clean

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
