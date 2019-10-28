#include <stdexcept>
#include "Organizer.hpp"

#include <ncurses.h>
#include "ncursesDisplay.hpp"
#include "ClockSpeed.hpp"
#include "cpuModel.module.hpp"
#include "dateTime.module.hpp"
#include "hostname.Module.hpp"
#include "osInfo.model.hpp"
#include "ram.module.hpp"
#include "totalRam.module.hpp"
#include "cpuCores.module.hpp"
#include "cat.module.hpp"
#include "network.module.hpp"
#include "mlx.module.hpp"

Organizer::Organizer(void)
{
    this->_currentDisplay = "ncurses";
    this->_Display = new ncursesDisplay;
    this->_Modules = this->initModules();
}

Organizer::Organizer(std::string startDisplay)
{
    this->_currentDisplay = startDisplay;
    if (startDisplay.compare("ncurses") == 0)
        this->_Display = new ncursesDisplay;
    else if (startDisplay.compare("mlx") == 0)
        this->_Display = new mlxDisplay;
    else
        throw std::exception();
    this->_Modules = this->initModules();
}

Organizer::Organizer(Organizer const &instance)
{
    this->_currentDisplay = instance.getCurrentDisplay();
    this->_Modules = instance.getModules();
    this->_Display = instance.getDisplayObj();
}

Organizer::~Organizer(void)
{
    delete this->_Modules;
    delete this->_Display;	
}

Organizer &	Organizer::operator=(Organizer const &rhs)
{
    this->_currentDisplay = rhs.getCurrentDisplay();
    this->_Modules = rhs.getModules();
    this->_Display = rhs.getDisplayObj();
    return *this;
}

void    Organizer::display(void)
{
    int     pos;

    pos = 0;
    this->_Display->preframeOperations();
    for (std::vector<IMonitureModule*>::iterator it = this->_Modules->begin();
        it != this->_Modules->end(); ++it)
        {
            this->_Display->getMonitureModule(false, (*it)->getInfoType(), pos, (*it)->getValues());
            ++pos;
        }
    this->_Display->refreshDisplay();
}

std::vector<IMonitureModule*>    *Organizer::initModules(void)
{
    std::vector<IMonitureModule*>    *vec = new std::vector<IMonitureModule*>();
    
    vec->push_back(new ClockSpeed);
    vec->push_back(new CpuModel);
    vec->push_back(new DateTime);
    vec->push_back(new HostName);
    vec->push_back(new OsInfo);
    vec->push_back(new Ram);
    vec->push_back(new TotalRam);
    vec->push_back(new CpuCores);
    vec->push_back(new Network);
    //vec->push_back(new Cat);


    return vec;
}

void	Organizer::updateDataModules(void)
{
    for (std::vector<IMonitureModule*>::iterator it = this->_Modules->begin();
        it != this->_Modules->end(); ++it)
        (*it)->readAndAddToVector();
}

void	Organizer::switchDisplay(void)
{
    delete this->_Display;
    if (this->_currentDisplay.compare("ncurses") == 0)
        this->_Display = /* new SDL Object*/ NULL;
    else
        this->_Display = new ncursesDisplay;
}

std::string                     Organizer::getCurrentDisplay(void) const
{
    return this->_currentDisplay;
}

std::vector<IMonitureModule*>    *Organizer::getModules(void) const
{
    return this->_Modules;
}

IMonitureDisplay                *Organizer::getDisplayObj(void) const
{
    return this->_Display;
}