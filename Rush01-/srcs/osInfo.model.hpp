#ifndef OSINFO_HPP
# define OSINFO_HPP
#include <string>

#include "IMonitureModule.hpp"

class OsInfo : public IMonitureModule
{
	public:
		OsInfo(void);
		OsInfo(OsInfo const &instance);
		OsInfo &operator=(OsInfo const &rhs);
		~OsInfo(void);

    void        readAndAddToVector();

	private:
    std::string value;

};

#endif
