#include<iostream>
#include<string>    
#include<algorithm>

using namespace std;

int main(){
    string str,rev;
    cin>>str>>rev;
    reverse(str.begin(),str.end());
        if(str==rev){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}