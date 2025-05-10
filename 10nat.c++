#include<iostream>
#include<cmath>
#include<vector>    


using namespace std;

int main(){
    int n,sum=0;
    cout<<"Input a number of terms:";
    cin>>n;
    cout<<"The natural numbers upto "<<n<<"th terms are:";
    for(int i=1;i<=n;i++){
        if(i!=n){
        cout<<i<<",";
        sum+=i;
        }
        else{
            cout<<i<<".";
            sum+=i;
        }
    }
    cout<<endl;
    cout<<"The sum of the natural numbers is:"<<sum<<endl;
}