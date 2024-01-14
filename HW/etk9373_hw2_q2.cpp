#include <iostream>
using namespace std;

int main()
{
    int totalCoins;
    int dollars, cents, quarters, dimes, nickels, pennies;

    cout<<"Please enter your amount in the format of dollars and cents separated by space: "<<endl;
    cin>>dollars>>cents;
    
    cout<<dollars<<" dollars "<<"and "<<cents<<" cents "<<endl;

    totalCoins = dollars * 100 + cents;

    quarters = totalCoins / 25;
    totalCoins = totalCoins - quarters * 25;
    dimes = totalCoins / 10;
    totalCoins = totalCoins - dimes * 10;
    nickels = totalCoins / 5;
    totalCoins = totalCoins - nickels * 5;
    pennies = totalCoins;
    totalCoins = totalCoins - pennies; 



    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels, "<<pennies<<" pennies";

    
    return 0;
}
