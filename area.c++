#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int rad;
    cout<<"Enter the radius of the sphere: ";
    cin>>rad;
    double volume=(4/3)*3.14*pow(rad,3);
    double surface_area=4*3.14*pow(rad,2);
    cout<<"Volume of the sphere is: "<<volume<<endl;
    cout<<"Surface area of the sphere is: "<<surface_area<<endl;
}