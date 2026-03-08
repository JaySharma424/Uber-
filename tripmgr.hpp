#pragma once
#include "common.hpp"
#include "customer.hpp"
#include "driver.hpp"
#include "customermgr.hpp"
#include "drivermgr.hpp"
#include "trip.hpp"
#include "pricing.hpp"
#include "drivermatch.hpp"
class Trip;
class TripMgr
{
    private:
    static TripMgr* tripmgr;
    static int tripid;
    unordered_map<int, Trip*> trips;
    public:
    static TripMgr* gettripmgr();
    void createtrip(Customer* customer, int src, int dest);
    Trip* gettrip(int tripid);

    

};