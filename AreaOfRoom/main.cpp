#include <iostream>

using namespace std;

int main()
{
	int width {0};
    
    cout << "Enter the Width of the room: ";
    
    cin >> width;
    
    int length {0};
    
    cout << "Enter the Length of the room: ";
    
    cin >> length;
    
    cout << "The area of the room is: " << width*length << endl;
    
	return 0;
}
