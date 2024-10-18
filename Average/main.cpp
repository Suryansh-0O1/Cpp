#include <iostream>

using namespace std;

//int main()  //Using Double Keyword
//{
//    double total{};
//    int num1{},num2{},num3{};
//    const int den{3};
//    
//    cout << "Enter 3 numbers seperated by namespace: " ;
//    cin >> num1 >> num2 >> num3;
//    
//    total = num1 + num2 + num3;
//    
//    double avg{};
//    avg = total/den;
//    
//    cout << endl;
//    
//    cout << "The three numbers are: " << num1 << " " << num2 << " " << num3 << endl;
//    cout << "The sum of the three numbers is: " << total << endl;
//    cout << "The average of the three numbers is: " << avg << endl;
//    
//	return 0;
//}

int main()  // Using static_cast
{
    int total{};
    int num1{},num2{},num3{};
    const int den{3};
    
    cout << "Enter 3 numbers seperated by namespace: " ;
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double avg{};
    avg = static_cast<double>(total)/den;
    
    cout << endl;
    
    cout << "The three numbers are: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "The sum of the three numbers is: " << total << endl;
    cout << "The average of the three numbers is: " << avg << endl;
    
	return 0;
}

