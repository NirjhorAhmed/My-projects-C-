#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

int main()
{
    int a[4],count=0;
    for(int i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i] == a[j]){
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);
}