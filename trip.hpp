#pragma once
#include "customer.hpp"
#include "driver.hpp"
#include "customermgr.hpp"
#include "drivermgr.hpp"
class Customer;
class Trip
{
    public:
    Customer* customer;
    Driver* driver;
    string status;
    int srclocation;
    int destlocation;
    int price;
    Trip(Customer* customer, int src, int dest);
    void displaytrip();
};