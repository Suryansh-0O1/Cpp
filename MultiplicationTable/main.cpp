#include <iostream>

using namespace std;

int main()
{
    for (int num1{1}; num1<11 ; ++num1){
        for (int num2{1}; num2 < 11; ++num2){
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        }
        cout << "--------------" << endl;
    }
    return 0;
}
