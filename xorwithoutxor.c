#include<stdio.h>
#include<stdlib.h>

int XOR(int a,int b){
    return (a|b)&(~a|~b);
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",XOR(n,m));
    return 0;
}