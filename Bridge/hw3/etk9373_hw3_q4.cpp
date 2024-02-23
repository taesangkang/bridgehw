#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main(){

float number;
float ceiling, floor, roundedNumber;
int choice;

cout << "Please enter a Real number ";
cin >> number;

cout << "Choose your rounding method: \n";
cout << "1. Floor round \n";
cout << "2. Ceiling round \n";
cout << "3. Round to the nearest whole number \n";
cin >> choice;

float cdecimals = number - int(number);
float fdecimals = 1 - cdecimals;

switch(choice)
{
    case FLOOR_ROUND:
        roundedNumber = (number - 1) + (fdecimals);
        cout << roundedNumber;
        break;
    
    case CEILING_ROUND:
        roundedNumber = (number + 1) - (cdecimals);
        cout << roundedNumber;
        break;

    case ROUND:
        if(number >= ((int)number + .5)){
            roundedNumber = (number + 1) - (cdecimals);
            cout << roundedNumber;
        }
        else if(number < ((int)number + .5)){
            roundedNumber = (number - 1) + (fdecimals);
            cout << roundedNumber;
        }
        break;
    
    default:
        cout << "You inputted an invalid response \n";

}

    return 0;
}