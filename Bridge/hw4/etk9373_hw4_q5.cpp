#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;    
    
    for(int i = n; i >= 1; i--)
    {
        for(int k = n - i;k > 0; k--)
        {
            cout << "  ";
        }
        for(int j = i * 2 - 1; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;


    }
    
    for(int i = 1; i <= n; i++)       
    {
        for(int k = n - i;k > 0; k--)
        {
            cout << "  ";
        }
        for(int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;


    }


    return 0;
}
