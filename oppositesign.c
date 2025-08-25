#include<stdio.h>
#include<stdlib.h>

int find(int n,int m){
    return (m^n)<0;
}

int main()
{
    int n,m;
    scanf("%d %d", &n,&m);
    if(find(n,m)){
        printf("YES\n");
    }   
    else{
        printf("NO\n");
    }
}