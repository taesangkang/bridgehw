#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 int main(){

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    int numberCountdown = 5;
    int numberCounter = 0;
    int userInput;
    int randomNumber;
    int min = 1;
    int max = 100;
    srand(time(0));
    randomNumber = (rand() % 100) + 1;
    
    while(userInput != randomNumber){
        cout << "Range [" << min << ", " << max << "], Number of Guess left: " << numberCountdown << endl;
        numberCountdown--;        
        
        cout << "Your guess: ";
        cin >> userInput; 

        if(userInput > randomNumber){
            if(userInput > max){
                max = max;
            }    
            
            else{
                cout << "Wrong! My number is smaller. " << endl;
                max = userInput - 1;
            }

        }
        else if(userInput < randomNumber){
            if(userInput < min){
                min = min;
            }
            else{
                cout << "Wrong! My number is bigger. " << endl;
                min = userInput + 1;
            }
        }
        numberCounter++;
        if(userInput == randomNumber){
            cout << "Congrats! You guessed my number in " << numberCounter << " guesses." << endl;
        }
        else if(numberCounter == 5){
            cout << "Out of guesses! My number is " << randomNumber << endl;
            break;
        }





    }

    return 0;
 }

