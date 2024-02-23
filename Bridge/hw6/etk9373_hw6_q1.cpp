#include <iostream>
using namespace std;

int fib(int n);

int main(){

    int num;
    int fibNumber = 0;
    cout << "Please enter a positive integer: ";
    cin >> num;
    
    fibNumber = fib(num);
    cout << fibNumber;

    return 0;
}

int fib(int n){

    int currDigit = 1;
    int prevDigit = 0;
    int newCurrDigit = 0;
    for(int i = 1; i <= n; i++){       
        if(i == 1){
            newCurrDigit = 1;
        }
        else{
        newCurrDigit = currDigit + prevDigit;
        prevDigit = currDigit;
        currDigit = newCurrDigit;
        }
    }

    return newCurrDigit;


    
}