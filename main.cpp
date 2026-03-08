#include "common.hpp"
#include "customer.hpp"
#include "driver.hpp"
int main()
{
    cout<<"Welcome to UBER!"<<ed;
    
    string name;
    cout<<"Pleae enter your name"<<ed;
    cin>>name;
    Customer* pratyush = new Customer(name);

    Driver* d1 = new Driver("Mukesh", 5);
    Driver* d2 = new Driver("Ram", 4);
    Driver* d3 = new Driver("Suresh", 3);

    // now lets us create a trip
    cout<<"Enter your src addr"<<ed;
    int src,dest;
    cin>>src;
    cout<<"enter your destination adddr"<<ed;
    cin>>dest;
    pratyush->createtrip(src,dest);
    



    return 0;
}