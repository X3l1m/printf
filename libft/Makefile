# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/26 19:08:12 by seyildir      #+#    #+#                  #
#    Updated: 2023/01/10 17:11:22 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= libft.h

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)

RM		= rm -f

AR		= ar
ARFLAGS	= -rc
ARCHIVE	= $(AR) $(ARFLAGS)

SRC 	=	ft_atoi.c \
			ft_bzero.c \
			ft_isalpha.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_split.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(COMPILE) -c $< -o $@ 

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

arc: all clean

re: fclean all