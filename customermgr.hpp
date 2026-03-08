#pragma once
#include "common.hpp"
#include "customer.hpp"
class Customer;
class CustomerMgr
{
    private:
    static CustomerMgr* customermgr;
    unordered_map<string,Customer*> customers;

    public:
    static CustomerMgr* getcustomermgr();
    void addcustomer(string name, Customer* customer);
    Customer* getcustomer(string name);

};