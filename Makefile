##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC     =	tools.c \
		tools_2.c \
		division/division.c \
		division/modulo.c \
		addition/addition.c \
		multiplication/multiplication.c \
		multiplication/multiplication_tools.c \
		operations.c \
		expr_eval/eval_expr2.c \
		expr_eval/eval_expr.c \
		base.c \
		error.c \
		help.c \
		main.c \

OBJ     =       $(SRC:.c=.o)

NAME    =       calc

all:    $(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my
		gcc -o $(NAME) $(SRC) -L./lib/ -lmy -g3

clean:
	find . -name "*.o" -exec rm -rf "{}" \;
	find . -name "*.o" -exec rm -rf "{}" \;

fclean: clean
	rm $(NAME)
	make fclean -C ./lib/my
re:	fclean all
