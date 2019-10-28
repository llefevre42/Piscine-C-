#ifndef HOSTNAME_HPP
# define HOSTNAME_HPP
#include <string>

#include "IMonitureModule.hpp"

class HostName : public IMonitureModule
{
	public:
		HostName(void);
		HostName(HostName const &instance);
		HostName &operator=(HostName const &rhs);
		~HostName(void);

    void        readAndAddToVector();

	private:
    std::string value;

};

#endif
