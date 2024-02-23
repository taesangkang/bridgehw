#include <iostream>
using namespace std;

int main(){

    int graduationYear, currentYear;
    string name;

    cout << "Please enter your name: \n";
    cin >> name;
    cout << "Please enter your graduation year: \n";
    cin >> graduationYear;
    cout << "Please enter current year: \n";
    cin >> currentYear;

    if(currentYear == (graduationYear - 4)){
        cout << name <<", "<<"you are a Freshman";
    }
    else if(currentYear == (graduationYear - 3)){
        cout << name <<", "<<"you are a Sophomore";

    }
    else if(currentYear == (graduationYear - 2)){
        cout << name <<", "<<"you are a Junior";

    }
    else if(currentYear == (graduationYear - 1)){
        cout << name <<", "<<"you are a Senior";

    }
    else if(currentYear >= graduationYear){
        cout << name <<", "<<"you have graduated!";
    }
    else{
        cout << "You are not in college yet.";
    }



    return 0;
}