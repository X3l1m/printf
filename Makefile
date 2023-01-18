# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/18 21:04:02 by seyildir      #+#    #+#                  #
#    Updated: 2023/01/18 21:04:02 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
HEADER 	= ft_printf.h

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror
COMPILE	= $(CC) $(CFLAGS)

RM		= rm -f
ARCHIVE	= ar -rc

SRC_DIR = ./src
OBJ_DIR = ./obj

SRC		= $(wildcard $(SRC_DIR)/*.c)
OBJ		= $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))


all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(COMPILE) -c $< -o $@

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

arc: all clean

.PHONY: \
	all \
	clean \
	re \
	arc \