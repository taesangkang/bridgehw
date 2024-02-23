/*





*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

int length_of_sequence;
bool breakCondition;
double userInput;
double product;
double mean;
cout << "Section A" << endl;
cout << "Please enter the length of the sequence: ";
cin >> length_of_sequence;
cout << "Please enter your sequence: " << endl;

product = 1;

for (int i = 1; i <= length_of_sequence; i++){
    cin >> userInput;
    product = product * userInput;
}

mean = pow(product, 1.0/length_of_sequence);
cout << mean << endl;

cout << "Section B" << endl;
cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1" << endl;

product = 1;
length_of_sequence = 0;

breakCondition = false;
while(breakCondition == false){
    cin >> userInput;
    if(userInput == -1){
        breakCondition = true;
    }
    else{        
        product = product * userInput;
        length_of_sequence++;
    }

}

    mean = pow(product, 1.0/length_of_sequence);
    cout << mean << endl;

    return 0;
}


