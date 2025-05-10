#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int cp=0;
    int mp=0;
    int n,ep,pe;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ep>>pe;
        cp-=ep;
        cp+=pe;
        if(cp>mp){
            mp=cp;
        }
    }
    cout<<mp<<endl; 
}