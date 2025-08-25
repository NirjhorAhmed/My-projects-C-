#include<stdio.h>
#include<limits.h>
#include<math.h>    

int main(){
    int n,msb;
    printf("Enter a bit number: "); 
    scanf("%d", &n);
    msb=1<<((sizeof(int)*8)-1);
    if(n & 1){
        printf("The most significant bit is 1\n");
    } else {
        printf("The most significant bit is 0\n");
    }
}