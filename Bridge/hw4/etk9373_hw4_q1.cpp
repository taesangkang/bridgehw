#include <iostream>
using namespace std;

int main(){
    
    int n;
    
    cout << "Please enter a positive number: ";
    cin >> n;
    cout << "Section A" << endl;


    for(int i = 1; i <= n; i++){        
        
        cout << i * 2 << endl;
    
    }

    cout << "Section B" << endl;

    int j = 1;
        
        while(j <= n){     
        cout << j * 2 << endl;
        j++;
        
    }

    


    return 0;
}