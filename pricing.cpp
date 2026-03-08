#include "pricing.hpp"

int DefaultPrice::calculateprice(Trip* trip)
{
    // may be some logic
    return 100;
}

int DestinationPrice::calculateprice(Trip* trip)
{
    int diff=abs(trip->destlocation - trip->srclocation);
    return diff*10;
}