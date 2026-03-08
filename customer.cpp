#include "customer.hpp"
#include "customermgr.hpp"

Customer::Customer(string name)
{
    this->name = name;
    CustomerMgr* manager = CustomerMgr::getcustomermgr();
    manager->addcustomer(name, this);
    // cout<<"Welcome to UBER "<<name<<ed;

}


// Trip creation
void Customer::createtrip(int src, int dest)
{
    TripMgr* tripmanager = TripMgr::gettripmgr();
    tripmanager->createtrip(this,src,dest);
}