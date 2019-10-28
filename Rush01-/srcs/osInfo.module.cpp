#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "osInfo.model.hpp"
#include <string>

int GetOSVersionComponent(int component) {
    char cmd[64] ;
    sprintf(
            cmd,
            "sw_vers -productVersion | awk -F '.' '{print $%d}'",
            component
    ) ;
    FILE* stdoutFile = popen(cmd, "r") ;

    int answer = 0 ;
    if (stdoutFile) {
        char buff[16] ;
        char *stdout = fgets(buff, sizeof(buff), stdoutFile) ;
        pclose(stdoutFile) ;
        sscanf(stdout, "%d", &answer) ;
    }

    return answer ;
}

OsInfo::OsInfo(void)
{
    this->_graphBool = false;
    this->_varType = "version de l'OS";
}


OsInfo::OsInfo(OsInfo const &instance)
{

  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();
}

OsInfo::~OsInfo(void)
{

}

OsInfo &	OsInfo::operator=(OsInfo const &rhs)
{

  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	OsInfo::readAndAddToVector()
{
  this->_Values = static_cast<std::string>(std::to_string(GetOSVersionComponent(1))+ "." + std::to_string(GetOSVersionComponent(2))+ "." + std::to_string(GetOSVersionComponent(3)));
}
