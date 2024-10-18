#include <iostream>

using namespace std;

int main()
{
    const int maxl{10},maxb{10},maxh{10};
    double BaseCost{2.50},length{},width{},height{},volm{},tot{};
    
    cout << "Welcome to Package Cost calculator!" << endl << endl;
    cout << "Enter Length,Width and Height in inches followed by space: ";
    cin >> length >> width >> height ;
    
    volm = length*width*height;
    
    cout << endl;
    
    if (maxl>=length and maxb>=width and maxh>=height){
        cout << "========================= Bill =========================" << endl << endl;
        cout << "Volumn      : " << volm << endl;
        cout << "Base Cost   : " << BaseCost << endl;
        if (volm<=100){
            tot = BaseCost*volm;
            cout << "Surcharge   : 0%"  << endl;
        }else if (volm>100 and volm<=500){
            BaseCost += BaseCost*.10;
            tot = BaseCost*volm;
            cout << "Surcharge   : 10%"  << endl;
        }else{
            BaseCost += BaseCost*.25;
            tot = BaseCost*volm;
            cout << "Surcharge   : 25%"  << endl;
        }
        cout << "========================================================" << endl;
        cout << "Total Cost  : " << tot << endl;
    }else{
        cout << "Sorry the Parcel is too big.\nWe cant deliver it."<<endl;
    }
    
    return 0;
}
