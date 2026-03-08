#include "drivermatch.hpp"

Driver* DefaultMatch::getdriver()
{
    DriverMgr* drivermanager = DriverMgr::getdrivermgr();
    for(auto i: drivermanager->drivers)
    {
        return i.second;
    }
    cout<<"No drivers are availale at this moment"<<ed;
    return null;
}
Driver* RatingMatch::getdriver()
{
    DriverMgr* drivermanager = DriverMgr::getdrivermgr();
    int maxrating=-1;
    Driver* driver = null;
    for(auto i: drivermanager->drivers)
    {
        if(maxrating<i.second->rating)
        {
            maxrating = i.second->rating;
            driver = i.second;
        }
    }
    return driver;
}
