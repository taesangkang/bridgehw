#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, b, c;
    double solution1, solution2;
    double discriminant;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    if(a == 0 && b == 0 && c == 0){
        cout << "Infinite number of solutions";
        return 0;
    }
    else if(a == 0 && b == 0){
        cout << "No solution";
        return 0;
    }
    else if(b == 0){
        cout << "No real solution";
        return 0;
    }

    discriminant = (pow(b, 2)) - (4 * a * c);

    if(discriminant > 0){
       
        solution1 = (-b + sqrt(discriminant))/ (2 * a);
        solution2 = (-b - sqrt(discriminant))/ (2 * a);
        cout << "The equation has two real solution x= " << solution1 << " and " << solution2;

    }
    else if(discriminant == 0){
        solution1 = ((-b)/(2 * a));
        cout << "The equation has a single real solution x=" << solution1;
    }
    else if(discriminant < 0){
        cout << "There is no real solution";

    }
    return 0;
}