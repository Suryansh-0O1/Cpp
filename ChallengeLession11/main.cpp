#include <iostream>
#include <vector>

using namespace std;

void options(){
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
    
    for (auto item: options){
        cout << item << endl;
    }
}

void print(vector<int> list){
    cout << "[ ";
    if (list.size()>0){
        for (auto i: list){
            cout << i << " ";
        }   
    }
    cout << "]" << endl << endl;
}

void add(vector<int> &list){
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
}

void mean(vector<int> list){
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
}

void small(vector<int> list){
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
}

void large(vector<int> list){
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
}

void find(vector<int> list){
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
}

void clear(vector<int> &list){
    list.clear();
    cout << "The list has been cleared." << endl;
}

void choise(vector<int> &list){
    cout << endl;
    char choice{};
    cout << "Enter Your Choice: ";
    cin >> choice;
    
    if (choice=='P' or choice=='p'){
        
        print(list);
        
        return choise(list);
        
    }else if (choice=='A' or choice=='a'){
        
        add(list);
        
        return choise(list);
        
    }else if (choice=='M' or choice=='m'){
       
        mean(list);
        
        return choise(list);
    
    }else if (choice=='S' or choice=='s'){
        
        small(list);
        
        return choise(list);
    
    }else if (choice=='L' or choice=='l'){
        
        large(list);
        
        return choise(list);
    
    }else if (choice=='Q' or choice=='q'){
        
        return;
        
    }else if (choice=='F' or choice=='f'){
        
        find(list);
        
        return choise(list);
    
    }else if (choice=='C' or choice=='c'){
        
        clear(list);
        
        return choise(list);
    
    }else{
        
        cout << "Invalid Option." << endl;
        
        return choise(list);
        
    }
}

int main()
{
    vector<int> list{1,2,3};
    options();
    choise(list);
    return 0;
}
