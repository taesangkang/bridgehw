#include <iostream>
using namespace std;


/*
Create a program that takes in a decimal number and prints its roman numerical equivalent
Through each iteration separate 1000, 500, 100, 50, 10, 5, and 1 to separate characters
I want the program to iterate as long the input of the user is 0 (n > 0)





*/

int main(){
    
    string finalRoman;
    int n;
    
    cout << "Enter a decimal number: ";
    cin >> n;

    while(n > 0){
        
        if(n >= 1000){
            finalRoman = finalRoman + 'M';
            n = n - 1000;
        }
        else if(n >= 500 && n < 1000){
            finalRoman = finalRoman + 'D';
            n = n - 500;
        }        
        else if(n >= 100 && n < 500){
            finalRoman = finalRoman + 'C';
            n = n - 100;
        }
        else if(n >= 50 && n < 100){
            finalRoman = finalRoman + 'L';
            n = n - 50;
        }
        else if(n >= 10 && n < 50){
            finalRoman = finalRoman + 'X';
            n = n - 10;
        }
        else if(n >= 5 && n < 10){
            finalRoman = finalRoman + 'V';
            n = n - 5;
        }
        else if(n >= 1 && n < 5){
            finalRoman = finalRoman + 'I';
            n = n - 1;
        }
   
    
    }

    cout << finalRoman;



    





    return 0;
}