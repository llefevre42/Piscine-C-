#include "IMonitureDisplay.hpp"

IMonitureDisplay::IMonitureDisplay(void)
{
    this->displayType = "ncurses";
}

IMonitureDisplay::IMonitureDisplay(std::string displayType)
{
    this->displayType = displayType;	
}

IMonitureDisplay::IMonitureDisplay(IMonitureDisplay const &instance)
{
    this->displayType = instance.displayType;
}

IMonitureDisplay::~IMonitureDisplay(void)
{
	
}

IMonitureDisplay &	IMonitureDisplay::operator=(IMonitureDisplay const &rhs)
{
    this->displayType = rhs.displayType;
    return *this;
}