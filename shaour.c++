#include<iostream>  
#include<cmath>
#include<string>    

using namespace std;

int main()
{
    string num1,num2;
    cin>>num1>>num2;
    int l1=num1.length();
    int l2=num2.length();
    int l=min(l1,l2);
    for(int i=0;i<l;i++)
    {
        if(num1[i]==num2[i])
        {
            cout<<"0";
        }
        else if(num1[i]!=num2[i])
        {
            cout<<"1";
        }
    }   
}