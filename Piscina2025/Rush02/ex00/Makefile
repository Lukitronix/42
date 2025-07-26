# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucmunoz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 12:25:09 by lucmunoz          #+#    #+#              #
#    Updated: 2025/07/26 12:30:18 by lucmunoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush-02
SRC_DIR	= .
SRCS	= $(wildcard $(SRC_DIR)/*.c)
OBJS	= $(SRCS: .c=.o)
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
