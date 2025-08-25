#include<stdio.h>

int bitset(int n,int k){
    return (n | (1<<k));
}

int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    printf("%d",bitset(n,k));
    return 0;
}