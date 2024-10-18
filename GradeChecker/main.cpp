#include <iostream>

using namespace std;

int main()
{
	int grade {0};
    
    cout << "Enter your grade: ";
    cin >> grade;
    
    cout << endl;
    cout << "===================================================================" << endl;
    
    if (grade>=90){
        if (grade>=95)
            cout << "You have got an A+" << endl;
        else
            cout << "You have got an A" << endl;
    }else if (grade>=80){
        if (grade>=85)
            cout << "You have got a B+" << endl;
        else 
            cout << "You have got a B" << endl;
    }else if (grade>=70){
        if (grade>=75) 
            cout << "You have got a C+" << endl;
        else 
            cout << "You have got a C" << endl;
    }else if (grade>=60){
        if (grade>=65)
            cout << "You have got a D+" << endl;
        else 
            cout << "You have got a D" << endl;
    }else if (grade>=50){
        if (grade>=55)
            cout << "You have got a E+" << endl;
        else 
            cout << "You have got a E" << endl;
    }else 
        cout << "You have got a F" << endl;
        
    return 0;
}
