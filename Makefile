##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio

RM	=	 rm -rf

CFLAGS = -W -Wall -Wextra

NAME = my_runner

SRC = 	src/main.c \
		src/my_getnbr.c \
		src/my_int_to_char.c \
		src/my_power.c \
		src/my_number_len.c \

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
	rm -f *.g*
	rm -f unit_test

fclean: clean
	rm -f $(NAME)

re:	fclean all