#include<stdio.h>
#include<limits.h>
#include<math.h>    

int flipbit(int n){
    int count=0;
    if(n==0){
        return 0;
    }
    while(((n>>count)&1)==0){
        count++;
    }
    
    return n^(1<<count);

}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", flipbit(n));
    return 0;
}