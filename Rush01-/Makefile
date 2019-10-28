COMPILER = clang++
CFLAGS = -Wall -Wextra -Werror

NAME = ft_gkrellm

_SOURCES = IMonitureDisplay.cpp  cat.module.cpp        cpuModel.module.cpp   main.cpp              osInfo.module.cpp \
IMonitureModule.cpp   clockspeed.module.cpp dateTime.module.cpp   ncursesDisplay.cpp    ram.module.cpp \
Organizer.cpp         cpuCores.module.cpp   hostname.module.cpp   network.module.cpp    totalRam.module.cpp \
mlx.module.cpp


SOURCES = $(addprefix srcs/,$(_SOURCES))

_INCLUDES =

INCLUDES = $(addprefix incs/,$(_INCLUDES))

OBJECTS = $(SOURCES:.cpp=.o)

all:
	@make $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling $(NAME)..."
	@$(COMPILER) $(CFLAGS) $(OBJECTS) -o $(NAME) -lncurses -lmlx -L ./minilibx_macos2 -framework OpenGL -framework AppKit
	@echo "$(NAME) done."

%.o: %.cpp $(INCLUDES) Makefile
	@$(COMPILER) $(CFLAGS) -o $@ -c $< -I incs

clean:
	@rm -rf $(OBJECTS)

fclean:
	@make clean
	@rm -rf $(NAME)

re:
	@make fclean
	@make all
