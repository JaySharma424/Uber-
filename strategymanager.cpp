#include "strategymanager.hpp"

StrategyMgr* StrategyMgr::strategymgr=null;

StrategyMgr* StrategyMgr::getstrategymgr()
{
    if(strategymgr==null)
    strategymgr  = new StrategyMgr();
    return strategymgr;
}

Price* StrategyMgr::getprice(Trip* trip)
{
    int diff=abs(trip->destlocation - trip->srclocation);
    if(diff<2)
    {
        return new DefaultPrice();
    }
    else
    return new DestinationPrice();
}

DriverMatch* StrategyMgr::getdrivermatch(Trip* trip)
{
    return new RatingMatch();
}