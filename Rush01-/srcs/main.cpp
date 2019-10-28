#include <ncurses.h>
#include <sstream>
#include <string>
#include <unistd.h>
#include <iostream>
#include "Organizer.hpp"
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    if (argc != 2 || (strcmp(argv[1], "ncurses") != 0 && strcmp(argv[1], "mlx") != 0))
    {
        std::cout << "usage: ./ft_gkrellm [ncurses|mlx]" << std::endl;
        return 0;
    }
    Organizer orga(argv[1]);
    while (1)
    {
        orga.updateDataModules();
        orga.display();
    }
}