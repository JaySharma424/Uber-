#pragma once
#include "common.hpp"
#include "trip.hpp"
#include "tripmgr.hpp"

class Customer
{
    public:
    string name;
    Customer(string name);

    void createtrip(int src, int dest);
};