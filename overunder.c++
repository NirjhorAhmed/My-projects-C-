#include<iostream>

using namespace std;

int main(){
    int num1=2147483647;
    int num2=-2147483648;
    cout<<"Increaing "<<num1<<" by 1: "<<num1+1<<endl;  
    cout<<"Decreasing "<<num2<<" by 1: "<<num2-1<<endl;
    cout<<"Multiplying "<<num1<<" by 2: "<<num1*2<<endl;
    cout<<"Multiplying "<<num2<<" by 2: "<<num2*2<<endl;
    cout<<"Dividing "<<num1<<" by 2: "<<num1/2<<endl;
    cout<<"Dividing "<<num2<<" by 2: "<<num2/2<<endl;
    cout<<"Adding "<<num1<<" and "<<num2<<": "<<num1+num2<<endl;
    cout<<"Multiplying "<<num1<<" and "<<num2<<": "<<num1*num2<<endl;   
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The number you entered is: "<<a<<endl;
    cout<<"The number you entered is: "<<a++<<endl;
    cout<<"The number you entered is: "<<++a<<endl;
    cout<<"The number you entered is: "<<a--<<endl;
    cout<<"The number you entered is: "<<--a<<endl;
}