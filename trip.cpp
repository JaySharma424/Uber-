#include "trip.hpp"

Trip::Trip(Customer* customer, int src, int dest)
{
    this->customer = customer;
    srclocation=src;
    destlocation=dest;
    
}