#pragma once
#include "common.hpp"
#include "trip.hpp"
#include "tripmgr.hpp"
#include "strategymanager.hpp"
class Trip;
class Price
{
    public:
    virtual int calculateprice(Trip* trip)=0;
};

class DefaultPrice: public Price
{
    public:
    int calculateprice(Trip* trip);
};

class DestinationPrice : public Price
{
    public:
    int calculateprice(Trip* trip);
};