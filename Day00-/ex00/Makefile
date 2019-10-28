# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llefevre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 11:37:53 by llefevre          #+#    #+#              #
#    Updated: 2019/10/15 15:43:09 by llefevre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all libfclean libclean fclean clean re

NAME = megaphone

SRC = megaphone.cpp

all: $(NAME)

$(NAME) :
	@clang++ -Wall -Werror -Wextra -c $(SRC)
	@clang++ -Wall -Werror -Wextra megaphone.o -o $(NAME)
	@echo "\033[32m$@\033[0m"


clean:
	@/bin/rm -f megaphone.o
	@echo "\033[32mrm .o files\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[32mrm $(NAME)\033[0m"

re: fclean all
