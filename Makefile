##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc -l csfml-graphics

RM	=	 rm -rf

CFLAGS = -W -Wall -Wextra

NAME = my_runner

SRC = 	src/destroy_resources.c     	\
		src/game_loop.c        			\
		src/main.c             			\
		src/frame_buffer_destroy.c   	\
		src/init_resources.c  			\
		src/my_runner.c					\
		src/help.c						\
		src/my_putstr.c					\
		src/my_putchar.c

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