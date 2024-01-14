#include <iostream>
using namespace std;

int main()
{

    int x, y;
    int add, sub, multiply, div, mod;
    double division;
    cout<<"Please enter two positive integers, separated by a space \n:";
    cin>>x>>y;

    add = x + y;
    sub = x - y;
    multiply = x * y;
    div = x / y;
    mod = x % y;

    division = (double)x/y;
    
    cout<<x<< " + " <<y<< " = "<<add<<endl;
    cout<<x<< " - " <<y<< " = "<<sub<<endl;
    cout<<x<< " * " <<y<< " = "<<multiply<<endl;
    cout<<x<< " / "<<y<< " = "<<division<<endl;
    cout<<x<< " div "<<y<< " = "<<div<<endl;
    cout<<x<< " mod "<<y<< " = "<<mod<<endl;



    return 0;
}
