# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adpusel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/26 12:53:27 by adpusel           #+#    #+#              #
#    Updated: 2019/09/26 12:53:34 by adpusel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
INCSDIR = includes/
SRCSDIR = src/
OBJSDIR = objs/
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# cd src; ls -1 | tr '\n' ' ' | pbcopy
#SRC = $(wildcard src/*.c)
#SRCS = $(SRC:src/%=%)
SRC = bswap.c ft_atoi.c ft_bzero.c ft_isdigit.c ft_lst.c ft_lstcount.c ft_lstfunc.c ft_memalloc.c ft_memcpy.c ft_pf.catch_format.c ft_pf.get_number.c ft_pf.get_str.c ft_pf.print.c ft_pf.utils.c ft_printf.c ft_putchar.c ft_strchr.c ft_strcmp.c ft_strlen.c ft_systm.c
SRCS = $(addprefix $(SRC_PATH),$(SRC))
OBJS = $(addprefix $(OBJSDIR),$(SRCS:.c=.o))

$(OBJSDIR)%.o: $(SRCSDIR)%.c
	@mkdir -p $(OBJSDIR)
	$(CC) $(CFLAGS) -I $(INCSDIR) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re