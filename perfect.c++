#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num,sum=0;
    cout<<"Enter a range: ";
    cin>>num;
    cout<<"Perfect numbers from 6 to "<<num<<": ";
    for(int i=6;i<=num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<num<<" is a perfect number."<<endl;
    }
    else{
        cout<<num<<" is not a perfect number."<<endl;
    }
}