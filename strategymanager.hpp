#pragma once
#include "common.hpp"
#include "strategymanager.hpp"
#include "trip.hpp"
#include "pricing.hpp"
#include "drivermatch.hpp"
class Price;
class Trip;
class DriverMatch;

class StrategyMgr
{
    private:
    static StrategyMgr* strategymgr;

    public:
    static StrategyMgr* getstrategymgr();
    Price* getprice(Trip* trip)  ;
    DriverMatch* getdrivermatch(Trip* trip);
};