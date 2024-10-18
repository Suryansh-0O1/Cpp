#include <iostream>

using namespace std;

int main()
{
    double ConversionRate {1.09};
    cout << "Welcome to Euro to Dollar convertor." << endl;
    cout << "Enter the amount of Euros: ";
    double Eur {0.0};
    cin >> Eur;
    double Dol {0.0};
    Dol = Eur*ConversionRate;
    cout << Eur << " is equivalent to " << Dol << endl << endl;
	return 0;
}
