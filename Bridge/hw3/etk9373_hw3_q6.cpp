#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double time, hours, minutes;
    double callLength;
    double totalCost;
    string dayofWeek;
    char temp;

    
    cout << "Please enter day of the week: ";  
    cin >> dayofWeek; 
    cout << "Please enter the time the call started: ";
    cin >> hours >> temp >> minutes; 
    cout << "Please enter the length of the call: ";
    cin >> callLength;

    time = hours + (minutes / 60);

    if(dayofWeek == "Sa" || dayofWeek == "Su"){
        totalCost = (callLength * .15);
        cout << "The total cost of the call is $" << totalCost;
    }

    else if((dayofWeek == "Mo" || dayofWeek == "Tu" || dayofWeek == "We" || dayofWeek == "Th" || dayofWeek == "Fr") && (time >= 8 && time <= 18)){
        totalCost = (callLength * .40);
        cout << "The total cost of the call is $" << totalCost;
    }

    else if((dayofWeek == "Mo" || dayofWeek == "Tu" || dayofWeek == "We" || dayofWeek == "Th" || dayofWeek == "Fr") && (time < 8 || time > 18)){   
        totalCost = (callLength * .25);
        cout << "The total cost of the call is $" << totalCost;       
    }
    else{
        cout << "Please choose a valid response!";
    }



    return 0;
}