#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: katozats <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/07/15 14:19:21 by katozats      #+#    #+#                  #
#    Updated: 2019/07/15 14:19:22 by katozats      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = srcs/
HEADER = includes/
FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
OBJECTS = $(patsubst %, %.o, $(FUNCTIONS))

.PHONY: clean fclean re all

all: $(NAME)

$(OBJECTS):
	@gcc -Wall -Werror -Wextra -c $(patsubst %.o, $(SRC)%.c, $@) -I $(HEADER)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS);
	@ranlib $(NAME);

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all