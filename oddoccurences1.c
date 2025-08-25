#include<stdio.h>
#include<stdlib.h>
#include<math.h>    

int oddoccurs(int *arr,int n){
    int odd=0;
    for(int i=0;i<n;i++){
        odd=arr[i]^odd;
    }
    return odd;
}

int main()
{
    int n;
    scanf("%d", &n);
    int * arr= (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d",oddoccurs(arr,n));
    return 0;
}