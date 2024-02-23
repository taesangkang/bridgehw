#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double inches, pounds;
    double meters, kilograms;
    double bmi;

    cout << "Please enter weight (in pounds): ";
    cin >> pounds;
    cout << "Please enter height (in inches): ";
    cin >> inches;

    meters = inches * 0.0254;
    kilograms = pounds * 0.453592;
    bmi = (kilograms) / pow(meters,2);

    if(bmi <= 18.5){
        cout<<"The weight status is: Underweight";

    }
    else if(bmi > 18.5 && bmi <= 25){
        cout<<"The weight status is: Normal";
    }
    else if(bmi > 25 && bmi <= 30){
        cout<<"The weight status is: Overweight";
    }
    else if(bmi > 30){
        cout<<"The weight status is: Obese";
    }



    return 0;
}