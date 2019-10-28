#ifndef ORGANIZER_HPP
# define ORGANIZER_HPP

#include <vector>
#include <iostream>
#include "IMonitureDisplay.hpp"
#include "IMonitureModule.hpp"

class Organizer
{
	public:
		Organizer(void);
		Organizer(std::string startDisplay);
		Organizer(Organizer const &instance);
		Organizer &operator=(Organizer const &rhs);
		~Organizer(void);

        void                            updateDataModules(void);
        void                            display(void);
        void                            switchDisplay(void);
        std::vector<IMonitureModule*>    *initModules(void);

        std::string                     getCurrentDisplay(void) const;
        std::vector<IMonitureModule*>    *getModules(void) const;
        IMonitureDisplay                *getDisplayObj(void) const;

	private:
        std::string                     _currentDisplay; //ncurses ou SDL
        std::vector<IMonitureModule*>   *_Modules;
        IMonitureDisplay                *_Display;
};

#endif