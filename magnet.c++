#include<iostream>
#include<cmath> 
#include<algorithm> 

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 1, element = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] != element){
            element = a[i];
            count++;
        }
    }
    cout << count << endl;
}