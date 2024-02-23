#include <iostream>
using namespace std;

int main(){

    cout << "Please enter a positive integer: " << endl;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "\t" << i * j;               
        }
        cout << endl;
    }


    return 0;
}
