# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/28 21:08:28 by oshudria          #+#    #+#              #
#    Updated: 2018/04/28 21:47:49 by oshudria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = wolf3d
CFLAGS = -Wall -Wextra #-Werror

INCLUDES = -I./includes/

SRC_PATH = ./src/

SRC_NAME = main.c

OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_NAME:.c=.o))

LIBFT = ./libft/libft.a
LIBFT_INCLUDES = -I./libft/includes/

ADDLIB = -lSDL2

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJ) $(LIBFT) $(ADDLIB)

$(OBJ_DIR)/%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(LIBFT_INCLUDES) $(INCLUDES) -c -o $@ $<

clean:
	make clean -C ./libft
	rm -rf $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)
	make  fclean -C ./libft

re: fclean all
