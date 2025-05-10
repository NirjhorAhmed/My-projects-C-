#include<iostream>  
#include<cmath> 

using namespace std;

int main(){
    cout<<"Enter temperature in Farenheit: ";
    double f;
    cin>>f;
    double c=(f-32)*(5/9.0);
    cout<<"Temperature in Celsius: "<<c<<endl;
}