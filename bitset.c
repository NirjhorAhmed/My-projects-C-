#include<stdio.h>

int bitset(int n,int k){
    if(n==0){
        return 0;
    }
    return (n & 1<<k);
}

int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    if(bitset(n,k)){
        printf("Yes\n");    
    }
    else{
        printf("No\n");
    }
}