#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> List{};
    int num{};
    cout<< "Enter the number of elements you want in the list: ";
    cin>> num;
    cout << endl;
    
    int middle{};
    for (int c{0} ; c<num ; c++){
        cout << "Enter number: ";
        cin >> middle;
        List.push_back(middle);
    }
    cout << endl;
    
    int check{};
    cout<< "Enter the number you eant to check elements before: ";
    cin >> check;
    cout << endl;
    
    int count{};
    while (count < List.size() and List[count]!=check){
        count+=1;
    }
    
    cout << "The number of elements are: " << count << endl;
    
    return 0;
}
