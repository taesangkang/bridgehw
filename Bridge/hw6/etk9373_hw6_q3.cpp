#include <iostream>
using namespace std;

double eApprox(int n);

int main(){
    cout.precision(30);
    
    for (int n = 1; n <= 15; n++){
        cout << "n = "<< n << '\t' << eApprox(n) << endl;
    }
    return 0;
}


double eApprox(int n){
    double sum = 1;
    double factorial = 1;

    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
        sum += (1 / factorial);
    }
    return sum;
}
