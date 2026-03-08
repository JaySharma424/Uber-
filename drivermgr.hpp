#pragma once
#include "common.hpp"
#include "driver.hpp"

class DriverMgr
{
    private:
    static DriverMgr* drivermgr;
    
    public:
    unordered_map <string, Driver*> drivers;
    static DriverMgr* getdrivermgr();
    void adddriver(string name,Driver* driver);
    Driver* getdriver(string name);
};