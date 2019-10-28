#ifndef TOTALRAM_HPP
# define TOTALRAM_HPP
#include <string>

#include "IMonitureModule.hpp"

class TotalRam : public IMonitureModule
{
	public:
		TotalRam(void);
		TotalRam(TotalRam const &instance);
		TotalRam &operator=(TotalRam const &rhs);
		~TotalRam(void);

    void        readAndAddToVector();

	private:
    std::string value;

};

#endif
