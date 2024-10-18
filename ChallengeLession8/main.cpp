#include <iostream>

using namespace std;

int main()
{
    int cents{0};
    cout << "Enter the numer of cents: ";
    cin >> cents;
    
    int dollar{},quarter{},dime{},nickel{};//,penny{};
    
    dollar=cents/100;
    cents%=100;
    
    quarter = cents/25;
    cents%=25;
    
    dime = cents/10;
    cents%=10;
    
    nickel = cents/5;
    cents%=5;
    
    //penny = cents;
    
    cout << "You can providethe change as followed: " << endl;
    cout << "Dollars  : " << dollar << endl;
    cout << "Quarters : " << quarter << endl;
    cout << "Dimes    : " << dime << endl;
    cout << "Nickels  : " << nickel << endl;
    cout << "Penny    : " << cents << endl;
    
 	return 0;
}
