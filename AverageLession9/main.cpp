#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
//{
//    int num{};
//    
//    cout << "Enter the total number you want to average: ";
//    cin >> num;
//    cout << endl;
//    
//    double middle{},sum{};
//    for (int i{0}; i < num ; i++){
//        cout << "Enter the number: ";
//        cin >> middle;
//        sum +=middle;
//    }
//    
//    cout << endl;
//    double average{};
//    average = sum/num;
//    
//    cout << "Your average is: " << average << endl;
//    
//    return 0;
//}



{
    int num{};
    
    cout << "Enter the total number you want to average: ";
    cin >> num;
    cout << endl;
    
    double middle{};
    vector<double> values {};
    for (int i{0} ; i<num ; ++i){
        cout << "Enter the number: ";
        cin >> middle;
        values.push_back(middle);
    }
    
    double sum{};
    for (auto value: values){
        sum+=value;
    }
    
    double average{};
    average = sum/num;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Your average is: " << average << endl;
}