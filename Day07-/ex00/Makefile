.PHONY: all libfclean libclean fclean clean re

NAME = whatever

SRC = whatever.cpp

all: $(NAME)

$(NAME) :
	@clang++ -Wall -Werror -Wextra -c  $(SRC)
	@clang++ -Wall -Werror -Wextra whatever.o -o $(NAME)
	@echo "\033[32m$@\033[0m"


clean:
	@/bin/rm -f whatever.o
	@echo "\033[32mrm .o files\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[32mrm $(NAME)\033[0m"

re: fclean all
