#include <iostream>
using namespace std;

int main(){

    double firstItem, secondItem;
    char clubCard;
    double taxRate;

    cout << "Enter price of first item: \n";
    cin >> firstItem;
    cout << "Enter price of second item: \n";
    cin >> secondItem;
    cout << "Does customer have a club card? (Y/N) \n";
    cin >> clubCard;
    cout << "Enter tax rate, e.g 5.5 for 5.5 percent tax: \n";
    cin >> taxRate;

    double basePrice, discountedPrice, totalPrice;
    basePrice = firstItem + secondItem;

    if(firstItem && secondItem){
        if(firstItem < secondItem){
            firstItem = firstItem / 2;
            discountedPrice = firstItem + secondItem;
        }
        else if(firstItem > secondItem){
            secondItem = secondItem / 2;
            discountedPrice = firstItem + secondItem;
        }

    }

    if(clubCard == 'Y' || clubCard == 'y'){
        discountedPrice = discountedPrice - (discountedPrice * .10);
    }
    else if(clubCard == 'N' || clubCard == 'n'){
        discountedPrice = discountedPrice;
    }

    taxRate = taxRate / 100;
    totalPrice = discountedPrice + (taxRate * discountedPrice);

    cout << "Base Price: " << basePrice << endl;
    cout << "Price after discounts: " << discountedPrice << endl;
    cout << "Total Price: " << totalPrice << endl;


    

    return 0;
}

