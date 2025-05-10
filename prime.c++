#include<iostream>  
#include<cmath>  

using namespace std;    

int main(){
   int number;
   cin>>number;
   bool prime = true;
   if(number<2){
        prime = false;
   }
   else{
        for(int i=2;i*i<=number;i++){
            if(number%i==0){
                prime=false;
                break;
            }
        }
   }
    if(prime){
          cout<<number<<" is a prime number."<<endl;
    }
    else{
          cout<<number<<" is not a prime number."<<endl;
    }
}