#include "driver.hpp"
#include "drivermgr.hpp"
Driver::Driver(string name, int rating)
{
    this->name=name;
    this->rating = rating;
    DriverMgr* manager = DriverMgr::getdrivermgr();
    manager->adddriver(name, this);

    // cout<<"You have joined UBER as a driver "<<name<<ed;
    
}