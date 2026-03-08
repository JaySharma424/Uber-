#include "tripmgr.hpp"
#include <windows.h>

int TripMgr::tripid =0;
TripMgr* TripMgr::tripmgr=null;

TripMgr* TripMgr::gettripmgr()
{
    if(tripmgr==null)
    tripmgr=new TripMgr();
    return tripmgr;
}

void TripMgr::createtrip(Customer* customer, int src, int dest)
{
    cout<<"finding your trip"<<ed;
    Sleep(3);
    tripid++;
    Trip* trip = new Trip(customer,src,dest);
    trips[tripid]= trip;
    cout<<"Your trip has been created"<<customer->name <<"\nFinding the best price and captain"<<ed;

    Sleep(3);
    StrategyMgr* stratmgr = StrategyMgr::getstrategymgr();
    // now we will get the price;
    Price* price = stratmgr->getprice(trip);
    
    cout<<"your fare is "<<price->calculateprice(trip)<<ed;
    Sleep(3);

    // now driver
    DriverMatch* drivermatch = stratmgr->getdrivermatch(trip);
    Driver* driver = drivermatch->getdriver();
    if(driver==null)
    {
        cout<<"No drivers found"<<ed;
        return;
    }
    cout<<"your driver is "<<driver->name<<" with "<<driver->rating<< "rating"<<ed;
    cout<<"Trip created successfully"<<ed;


    return;
}

Trip* TripMgr::gettrip(int tripid)
{
    if(trips.find(tripid)==trips.end())
    {
        cout<<"This trip ha mot been created"<<ed;
        return null;
    }
    return trips[tripid];
}




