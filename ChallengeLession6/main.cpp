#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to Suryansh's Cleaning Services!" <<endl<<endl;
    
    cout << "How many Small rooms would you like cleaned?: ";
    
    long SmallRooms {0};
    
    cin >> SmallRooms;
    
    cout << "How many Large rooms would you like cleaned?: ";
    
    long LargeRooms {0};
    
    cin >> LargeRooms;
    
    cout<< endl;
    
    cout << "Number of Small rooms: " << SmallRooms << endl;
    
    cout << "Number of Small rooms: " << LargeRooms << endl;
    
    double PricePerSmallRoom {25.0};
    
    cout << "Price per Small room: $"<< PricePerSmallRoom << endl;
    
    double PricePerLargeRoom {35.0};
    
    cout << "Price per Large room: $"<< PricePerLargeRoom << endl;
    
    long double cost {SmallRooms*PricePerSmallRoom + LargeRooms*PricePerLargeRoom};
    
    cout << "Cost: $" << cost << endl;
    
    double TaxRate {6.0/100};
    
    long double tax {cost*TaxRate};
    
    cout << "Tax: $" << tax << endl;
    
    cout << "================================================================" << endl;
    
    cout << "Total Amount: $" << cost+tax << endl;
    
    int Term {30};
    
    cout << "This estimate is valid till "<< Term << " days." << endl;
    
	return 0;
}
