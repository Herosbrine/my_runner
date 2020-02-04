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

SRC = 	src/condition_paralax.c \
		src/lose_condition.c \
		src/my_int_to_char.c \
		src/sound_management.c \
		src/destroy_item.c \
		src/main.c \
		src/my_number_len.c \
		src/gam_loop.c \
		src/make_screen.c \
		src/my_power.c \
		src/init_var.c \
		src/move_dino.c \
		src/my_runner.c \
		src/key_manage.c \
		src/my_getnbr.c \
		src/play_score.c \


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