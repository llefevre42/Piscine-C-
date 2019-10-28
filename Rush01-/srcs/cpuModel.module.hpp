#ifndef CPUMODEL_HPP
# define CPUMODEL_HPP
#include <string>

#include "IMonitureModule.hpp"

class CpuModel : public IMonitureModule
{
	public:
		CpuModel(void);
		CpuModel(CpuModel const &instance);
		CpuModel &operator=(CpuModel const &rhs);
		~CpuModel(void);

    void        readAndAddToVector();

	private:

};

#endif
