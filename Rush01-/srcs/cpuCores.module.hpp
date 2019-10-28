#ifndef CPUCORES_HPP
# define CPUCORES_HPP
#include <string>

#include "IMonitureModule.hpp"

class CpuCores : public IMonitureModule
{
	public:
		CpuCores(void);
		CpuCores(CpuCores const &instance);
		CpuCores &operator=(CpuCores const &rhs);
		~CpuCores(void);

    void        readAndAddToVector();

	private:

};

#endif
