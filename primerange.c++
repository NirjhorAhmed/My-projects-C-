#include<iostream>  
#include<cmath>     

using namespace std;    

int prime(int n){
    if(n<=1) return 0;
    if(n==2) return 1; 
    if(n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return 0;   
        }
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter a input: ";  
    cin >> n;
    cout << "The prime numbers in the range 2 to " << n << " are: " << endl;
    for(int i=2;i<=n;i++){
        if(prime(i)){
            cout << i << " ";   
        }
    }
    cout << endl;
}