#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){
    printShiftedTriangle(3, 4, '+');
    printPineTree(3, '#');
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    for(int i = 1; i <= n; i++){
        int totalAmountOfSpaces = (n - i) + m;
        for(int j = 1; j <= totalAmountOfSpaces; j++){
            cout << " ";
        }
        int totalAmountOfSymbols = (i + i) - 1;
        for(int j = 1; j <= totalAmountOfSymbols; j++){
            cout << symbol;
        }
        cout << endl;
    }

}

void printPineTree(int n, char symbol){
    for(int i = 1; i <= n; i++){
        printShiftedTriangle(i + 1, n - i, symbol);
    }

}
