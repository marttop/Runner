##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

NAME	=	my_runner

SRC	=	src/start.c \
		src/message.c \
		src/game_loop.c \
		src/render.c \
		src/events_controll.c \
		src/destroy.c \
		src/runner.c \
		src/display.c \
		src/animations.c \
		src/clock.c \
		src/rect.c \
		src/background.c \
		src/layers/display_layers.c \
		src/layers/last_layers.c \
		src/layers/layer1.c \
		src/layers/layer2.c \
		src/layers/layer3.c \
		src/layers/layer4.c \
		src/layers/layer5.c \
		src/layers/layer6.c \
		src/jump.c \
		src/slide.c \
		src/sounds.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra
CFLAGS	+=	-I./include -g3
FFLAGS	+=	-l csfml-system
FFLAGS	+=	-l csfml-graphics
FFLAGS	+=	-l csfml-audio
FFLAGS	+=	-l csfml-window

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(FFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
