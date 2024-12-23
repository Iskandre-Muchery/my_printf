##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_printf.c	\
		criterion.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	a.out

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ)	-o $(NAME)

clean:	all
	rm-f $(OBJ)

fclean:	clean
	rm -f $(OBJ)

re:	fclean all