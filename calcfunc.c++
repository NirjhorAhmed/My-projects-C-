#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;    

int main()
{
    int n;
    cin >> n;
    int sum = 0;    
    if(n%2 == 0){
        sum=n/2;
    }
    else{
        sum=-(n+1)/2;
    }
        cout << sum << endl;
}