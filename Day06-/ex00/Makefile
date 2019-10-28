.PHONY: all libfclean libclean fclean clean re

NAME = convert

SRC = main.cpp

all: $(NAME)

$(NAME) :
	@clang++ -Wall -Werror -Wextra -c  $(SRC)
	@clang++ -Wall -Werror -Wextra main.o -o $(NAME)
	@echo "\033[32m$@\033[0m"


clean:
	@/bin/rm -f main.o
	@echo "\033[32mrm .o files\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[32mrm $(NAME)\033[0m"

re: fclean all
