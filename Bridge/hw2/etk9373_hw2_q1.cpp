#include <iostream>
using namespace std;

int main()
{
    int dollars, cents, quarters, dimes, nickels, pennies;
    
    cout<<"Please enter the number of coins: \n";
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"#of pennies: ";
    cin>>pennies;

    pennies = pennies + (quarters * 25) + (dimes * 10) + (nickels * 5);
    cents = pennies % 100;
    dollars = pennies / 100; 
    

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents";


    
    
    return 0;
}

