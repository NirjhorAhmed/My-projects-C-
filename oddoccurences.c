#include<stdio.h>
#include<stdlib.h>
#include<math.h>    
#include<string.h>

int oddoccurs(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The odd occurrences are: %d\n",oddoccurs(arr, n));  
    return 0;
}