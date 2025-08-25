#include<stdio.h>

int modbit(int num,int k){
    return (num & (k-1));
}

int main(){
    int num,k;
    scanf("%d%d", &num,&k);
    printf("%d\n", modbit(num,k));
    return 0;
}