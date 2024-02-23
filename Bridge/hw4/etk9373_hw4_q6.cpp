#include <iostream>
using namespace std;

int main(){

    int digit, currDigit;
    int n;
    cout << "Please enter a positive integer: " << endl;
    cin >> n;

    
    
    for(int i = 1; i <= n; i++){
        
        digit = i;
        int evenCounter = 0, oddCounter = 0;   
        
        while(digit > 0){
            currDigit = digit % 10;
            if(currDigit % 2 == 0){
                evenCounter++;
            }
            else if(currDigit % 2 == 1){
                oddCounter++;
            }

            digit = digit / 10;

        }
            if(evenCounter > oddCounter){
                cout << i << endl;
            }        
        
        
        
        
    }
    

    return 0;
}