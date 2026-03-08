#include "drivermgr.hpp"

DriverMgr* DriverMgr::drivermgr=null;

DriverMgr* DriverMgr::getdrivermgr()
{
    if(drivermgr==null)
    drivermgr = new DriverMgr();
    return drivermgr;
}

void DriverMgr::adddriver(string name, Driver* driver)
{
    drivers[name] = driver;  //driver constructor
    cout<<"A new driver "<<name<<" has been added"<<ed;
    return;
}
Driver* DriverMgr::getdriver(string name)
{
    
    if(drivers.find(name)==drivers.end())
    {
        cout<<"This driver does not exist"<<ed;
        return null;
    }
    return drivers[name];
}