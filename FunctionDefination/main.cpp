#include <iostream>

using namespace std;

const double pi{3.14159};


double calc_area_of_the_circle(double radius){
    return pi*radius*radius;
}

double calc_area_of_the_cyliender(double radius, double height){
    return calc_area_of_the_circle(radius)*height;
}

void area_circle(){    //void type exmmple
    double radius{};
    cout << "\nEnter thr radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << calc_area_of_the_circle(radius) << endl;
}

void volume_cyliender(){
    double radius{},height{};
    cout << "\nEnter the radius of the cyliender: ";
    cin >> radius;
    cout << "\nEnter the height of the cyliender: ";
    cin >> height;
    cout << "The volume of the cyliender is: "<< calc_area_of_the_cyliender(radius,height) << endl;
}
    

int main()
{
    area_circle();
    volume_cyliender();
    
    return 0;
}
