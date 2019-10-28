#ifndef NCURSESDISPLAY_HPP
# define NCURSESDISPLAY_HPP

#include "IMonitureDisplay.hpp"

class ncursesDisplay : public IMonitureDisplay
{
	public:
		ncursesDisplay(void);
		ncursesDisplay(ncursesDisplay const &instance);
		ncursesDisplay &operator=(ncursesDisplay const &rhs);
		~ncursesDisplay(void);

        virtual void    getMonitureModule(bool graphBool, std::string infoType, int position, std::string Values);
		virtual void    refreshDisplay(void);
		virtual void    preframeOperations(void);

		static int		iteration;
	private:

};

#endif