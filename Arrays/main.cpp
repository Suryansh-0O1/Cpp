#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> Vector1 {};
    Vector1.push_back(10);
    Vector1.push_back(20);
    cout << Vector1.at(0) << endl;
    cout << Vector1.at(1) << endl;
    cout << Vector1.size() << endl;
    
    vector <int> Vector2 {};
    Vector2.push_back(100);
    Vector2.push_back(200);
    cout << Vector2.at(0) << endl;
    cout << Vector2.at(1) << endl;
    cout << Vector2.size() << endl;
    
    vector <vector<int>> Vector_2d {};
    Vector_2d.push_back(Vector1);
    Vector_2d.push_back(Vector2);
    cout << Vector_2d.at(0).at(0) << " " << Vector_2d.at(0).at(1) << endl;
    cout << Vector_2d.at(1).at(0) << " " << Vector_2d.at(1).at(1) << endl;
    cout << Vector_2d.size() << endl;
    
    Vector_2d.at(0).at(0)=1000;
    Vector1.at(0)=1000;
    
    cout << Vector_2d.at(0).at(0) << " " << Vector_2d.at(0).at(1) << endl;
    cout << Vector_2d.at(1).at(0) << " " << Vector_2d.at(1).at(1) << endl;
    cout << Vector_2d.size() << endl;
    
    cout << Vector1.at(0) << endl;
    cout << Vector1.at(1) << endl;
    cout << Vector1.size() << endl;
    
	return 0;
}
