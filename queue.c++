#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    char a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]='\0';
    while(t--){
    for(int i=0;i<n-1;i++){
        if(a[i]=='B' && a[i+1]=='G'){
            a[i]='G';
            a[i+1]='B';
            i++;
        }
    }
}
    cout<<a<<endl;
    return 0;
}