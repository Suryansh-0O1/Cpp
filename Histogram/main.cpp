#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num{};
    cout << "How many numbers you want to enter?\n";
    cin >> num;
    
    vector<int> data{};
    for (int i{0}; i<num ; ++i){
        int n{};
        cout << "Enter your number: ";
        cin >> n;
        data.push_back(n);
    }
    
    cout << "\nDisplaying Histogram"<<endl;
    for (auto num: data){
        for (int i{1} ; i<num+1 ; ++i){
            if (i%5==0){
                cout << "*";
            }else{
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}
