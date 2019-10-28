#ifndef IMONITUREMODULE_HPP
# define IMONITUREMODULE_HPP

#include <iostream>
#include <vector>

class IMonitureModule
{
	public:
		IMonitureModule(void);
		IMonitureModule(IMonitureModule const &instance);
		IMonitureModule &operator=(IMonitureModule const &rhs);
		virtual ~IMonitureModule(void);

                virtual void        readAndAddToVector() = 0;
                std::string         getValues() const;
                bool                getGraphBool() const;
                std::string         getInfoType() const;

	protected:
                std::string         _varType;
                bool                _graphBool;
                std::string         _Values;
                static const int    _ValuesLimit = 20;

};

#endif