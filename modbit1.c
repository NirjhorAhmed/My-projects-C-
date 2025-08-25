#include<stdio.h>

int get(int num,int k){
    while(num>=k){
        num = num-k;
    }
    return num;
}

int main(){
    int num,k;
    scanf("%d%d", &num,&k);
    printf("%d\n", get(num,k));
    return 0;
}