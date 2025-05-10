#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,h,sum=0;
    cin>>n>>h;
    int friends[n];
    for(int i=0;i<n;i++){
        cin>>friends[i];
    }
    for(int i=0;i<n;i++){
        if(friends[i]>h){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum<<endl;    
}