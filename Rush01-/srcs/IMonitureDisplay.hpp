#ifndef IMONITUREDISPLAY_HPP
# define IMONITUREDISPLAY_HPP

#include <vector>
#include<iostream>
#include "IMonitureModule.hpp"

class IMonitureDisplay
{
	public:
                IMonitureDisplay(void);
                IMonitureDisplay(std::string displayType);
                IMonitureDisplay(IMonitureDisplay const &instance);
                IMonitureDisplay &operator=(IMonitureDisplay const &rhs);
                virtual ~IMonitureDisplay(void);
                
                // infoType -> type de données (cpu, ping..)
                // x, y -> cooronnées x et y dna sle tableau
                // Values -> tableau vecteur de toutes les valeurs, une seul valeur si de type "no graph"
                virtual void    getMonitureModule(bool graphBool, std::string infoType, int position, std::string Values) = 0;

                virtual void    preframeOperations(void) = 0;
                virtual void    refreshDisplay(void) = 0;

                std::string         displayType; //ncurses ou sdl
	
        private:
};

#endif