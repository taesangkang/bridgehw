#include <iostream>
using namespace std;


int main(){
    
    int n;
    int remainder;
    int binaryN, power;

    cout << "Enter a decimal number: ";
    cin >> n;

    binaryN = 0;
    power = 1;
    
    while(n > 0){
        
        remainder = n % 2;
        binaryN += remainder * power;       
        power *= 10;
        n = n / 2;

    }

    cout << binaryN;
    



    return 0;
}

/*
76 
76 % 2 = 0
remainder = 0
binaryN = 0
power = 10
n = 38

38 % 2 = 0
remainder = 0
binaryN = 0
power = 100
n = 19

19 % 2 = 1
remainder = 1
binaryN = 100
power = 1000
n = 9

9 % 2 = 1
remainder = 1
binaryN = 1100
power = 10000
n = 4

4 % 2 = 0 
remainder = 0
binaryN = 1100
power = 100000
n = 2

2 % 2 = 0
remainder = 0
binaryN = 1100
power = 1000000
n = 1

1 % 2 = 1
remainder = 1 
binaryN = 1001100


*/