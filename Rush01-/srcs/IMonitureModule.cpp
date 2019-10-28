#include "IMonitureModule.hpp"

IMonitureModule::IMonitureModule(void)
{
}

IMonitureModule::IMonitureModule(IMonitureModule const &instance)
{
    this->_varType = instance.getInfoType();
    this->_Values = instance.getValues();
    this->_graphBool = instance.getGraphBool();
}

IMonitureModule::~IMonitureModule(void)
{
}

IMonitureModule &	IMonitureModule::operator=(IMonitureModule const &rhs)
{
    this->_varType = rhs.getInfoType();
    this->_Values = rhs.getValues();
    this->_graphBool = rhs.getGraphBool();
    return *this;	
}

std::string         IMonitureModule::getValues() const
{
    return this->_Values;
}

bool            	IMonitureModule::getGraphBool() const
{
    return this->_graphBool;	
}

std::string	        IMonitureModule::getInfoType() const
{
    return this->_varType;	
}