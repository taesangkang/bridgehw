#include <iostream>
using namespace std;

int main() 
{
    int jdaysWorked, jhoursWorked, jminutesWorked; 
    int bdaysWorked, bhoursWorked, bminutesWorked;
    int tdaysWorked, thoursWorked, tminutesWorked;
    
    cout<<"Please enter the number of days John has worked: \n";
    cin>>jdaysWorked;
    cout<<"Please enter the number of hours John has worked: \n";
    cin>>jhoursWorked;
    cout<<"Please ennter the number of minutes John has worked: \n";
    cin>>jminutesWorked;

    cout<<"Please enter the number of days Bill has worked: \n";
    cin>>bdaysWorked;
    cout<<"Please enter the number of hours Bill has worked: \n";
    cin>>bhoursWorked;
    cout<<"Please ennter the number of minutes Bill has worked: \n";
    cin>>bminutesWorked;

    tminutesWorked = bminutesWorked + jminutesWorked; 
    thoursWorked = bhoursWorked + jhoursWorked + (tminutesWorked / 60);
    tminutesWorked = tminutesWorked - (tminutesWorked / 60) * 60; 
    tdaysWorked = bdaysWorked + jdaysWorked + (thoursWorked / 24);
    thoursWorked = thoursWorked - (thoursWorked / 24) * 24;
    


    cout<<"The total time both of them worked together is: "<<tdaysWorked<<" days "<<thoursWorked<<" hours "<<tminutesWorked<<" minutes ";




    


    return 0;


}