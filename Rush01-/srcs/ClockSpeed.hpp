#ifndef CLOCKSPEED_HPP
# define CLOCKSPEED_HPP

#include "IMonitureModule.hpp"

class ClockSpeed : public IMonitureModule
{
	public:
		ClockSpeed(void);
		ClockSpeed(ClockSpeed const &instance);
		ClockSpeed &operator=(ClockSpeed const &rhs);
		virtual ~ClockSpeed(void);

    void        readAndAddToVector();

	private:

};

#endif
