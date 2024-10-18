#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> options{
        "P - Print Numbers",
        "A - Add a Number to the List",
        "M - Display the Mean of the Numbers",
        "S - Display the Smallest Number",
        "L - Display the Largest Number",
        "Q - Quit",
        "F - Find",
        "C - Clear the List"
    };
    
    vector<int> list{1,2,3};
    
    for (auto item: options){
        cout << item << endl;
    }
    
    bool cont{true};
    do{
        cout << endl;
        char choice{};
        cout << "Enter Your Choice: ";
        cin >> choice;
        
        if (choice=='P' or choice=='p'){
            cout << "[ ";
            if (list.size()>0){
             for (auto i: list){
                 cout << i << " ";
             }   
            }
            cout << "]" << endl << endl;
        
        
        }else if (choice=='A' or choice=='a'){
            int num{};
            cout << "Enter a Number: ";
            cin >> num;
            bool duplicate {false};
            
            
            for (auto i: list){
                if (i==num){
                    duplicate=true;
                }
            }
            
            
            if (duplicate == false){
                list.push_back(num);
                cout <<"The numbeer " << num <<" has been added to the list." << endl;
            }else{
                cout << "Sorry You entered a duplicate number.";
            }
        
                
        }else if (choice=='M' or choice=='m'){
            double sum{};
            if (list.size()>0){
                for (auto i: list){
                    sum+=i;
                }
                double mean{};
                mean=sum/list.size();
                cout << "The Mean of the Numbers is: " << mean << endl;
            }else{
                cout << "Unable to calculate Mean - No Data Available";
            }
        
        
        }else if (choice=='S' or choice=='s'){
            int small{};
            if (list.size()>0){
                small=list[0];
                for (auto i: list){
                    if (small>i){
                        small=i;
                    }
                }    
                cout << "The Smallest number is: " << small << endl;    
            }
        
        
        }else if (choice=='L' or choice=='l'){
            int big{};
            if (list.size()>0){
                big=list[0];
                for (auto i: list){
                    if (big<i){
                        big=i;
                    }
                }    
                cout << "The Largest number is: " << big << endl;    
            }
        
        
        }else if (choice=='Q' or choice=='q'){
            cont = false;
        }else if (choice=='F' or choice=='f'){
            int num{};
            cout << "Enter the Number: ";
            cin >> num;
            bool in{false};
            for (auto i: list){
                if (i==num){
                    in = true;
                }
            }
            if (in){
                cout << "Yes, the number " << num << " is present in the list." << endl;
            }else{
                cout << "No, the number " << num << " is not present in the list." << endl;
            }
        
        
        }else if (choice=='C' or choice=='c'){
            list.clear();
            cout << "The list has been cleared." << endl;
        
        
        }else{
            cout << "Invalid Option." << endl;
        }
    }while(cont);
    return 0;
}
