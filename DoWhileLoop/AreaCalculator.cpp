#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to the Area Calculator." << endl;
    char y{};
    do {
    cout << endl;
    double height{},length{};
    cout << "Enter the Height and Length with a space in between: ";
    cin >> height >> length;
    cout << endl;
    
    cout << "The area is: " << length*height << endl;
    
    cout << "Do you want to continue?(Y/N)";
    cin >> y;
    }while (y=='Y' or y=='y');
        
    return 0;
}
