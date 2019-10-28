#ifndef DATETIME_HPP
# define DATETIME_HPP
#include <string>

#include "IMonitureModule.hpp"

class DateTime : public IMonitureModule
{
	public:
		DateTime(void);
		DateTime(DateTime const &instance);
		DateTime &operator=(DateTime const &rhs);
		~DateTime(void);

    void        readAndAddToVector();

	private:
    std::string value;
};

#endif
