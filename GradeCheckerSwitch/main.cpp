#include <iostream>

using namespace std;

int main()
{
    char grade{};
    
    cout << "Enter the Grade you want to score: ";
    cin >> grade;
    
    cout << "\n======================================================================" << endl <<endl;
    
    switch (grade){
        
        case 'a':
        case 'A': 
            cout << "You need to score from 90 or above. Study hard." << endl;
            break;
            
        case 'b':
        case 'B': 
            cout << "You need to score 89-80. Keep studying!" << endl;
            break;
        
        case 'c':
        case 'C': 
            cout << "You need to score 79-70. Hope you do well." << endl;
            break;
            
        case 'd':
        case 'D': 
            cout << "You need to score from 69-60. You can do better." << endl;
            break;
        
        case 'e':
        case 'E': 
            cout << "You need to score from 59-50. Work harder." << endl;
            break;
        
        case 'f':
        case 'F': 
            cout << "You need to score below 50. Better luck next time." << endl;
            break;
            
    }
    
    cout << "\n======================================================================" << endl <<endl;
    
    return 0;
}
