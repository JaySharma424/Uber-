#pragma once
#include "common.hpp"
#include "driver.hpp"
#include "trip.hpp"
#include "drivermgr.hpp"


class DriverMatch
{
    public:
    virtual Driver* getdriver()=0;
};

class DefaultMatch: public DriverMatch
{
    public:
    Driver* getdriver();
};

class RatingMatch: public DriverMatch
{
    public:
    Driver* getdriver();
};