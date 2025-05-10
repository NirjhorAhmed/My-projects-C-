#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    int a,b;
    float c,d;
    cout<<fixed<<setprecision(2);
    cout<<"Enter 2 Integers: ";
    cin>>a>>b;
    cout<<"Enter 2 Numbers: ";
    cin>>c>>d;
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<a<<"-"<<b<<"="<<abs(a-b)<<endl;
    cout<<a<<"+"<<c<<"="<<a+c<<endl;
    cout<<a<<"/"<<c<<"="<<a/c<<endl;

}