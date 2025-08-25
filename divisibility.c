#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,count=0;
    scanf("%d", &n);
    int arr1[n], arr2[n],soln[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr1[i],&arr2[i]);
    }
    for(int i=0;i<n;){
        if(arr1[i]%arr2[i]!=0){
            arr1[i]=arr1[i]+1;
            count++;
        }
        else{
            printf("%d\n",count);
            count=0;
            i++;
            continue;
        }
    }
}