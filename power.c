
#include<stdio.h>
#include<math.h>
#include<string.h>

int countbit(int n){
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count==1;
}

int main(){
    int num;
    scanf("%d", &num);
    if(countbit(num)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}