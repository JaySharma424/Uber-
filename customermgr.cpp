#include "customermgr.hpp"

CustomerMgr* CustomerMgr::customermgr = null;

CustomerMgr* CustomerMgr::getcustomermgr()
{
    if(customermgr==null)
    customermgr = new CustomerMgr();
    return customermgr;
}

void CustomerMgr::addcustomer(string name, Customer* customer)
{
    cout<<"Customer "<<name<<" is being added in the database"<<ed;
    customers[name] = customer;
}
Customer* CustomerMgr::getcustomer(string name)
{
    if(customers.find(name)==customers.end())
    {
        cout<<"This customer does not exist"<<ed;
        return null;
    }
    return customers[name];
}