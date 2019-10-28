#ifndef RAM_HPP
# define RAM_HPP
#include <string>

#include "IMonitureModule.hpp"

class Ram : public IMonitureModule
{
	public:
		Ram(void);
		Ram(Ram const &instance);
		Ram &operator=(Ram const &rhs);
		~Ram(void);

    void        readAndAddToVector();

	private:
    std::string value;

};

#endif
