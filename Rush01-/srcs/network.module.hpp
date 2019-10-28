#ifndef NETWORK_HPP
# define NETWORK_HPP

#include "IMonitureModule.hpp"

class Network : public IMonitureModule
{
	public:
		Network(void);
		Network(Network const &instance);
		Network &operator=(Network const &rhs);
		virtual ~Network(void);

    void        readAndAddToVector();

	private:

};

#endif
