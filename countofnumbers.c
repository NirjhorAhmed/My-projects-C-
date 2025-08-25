#include<stdio.h>
#include<math.h>
#include<string.h>

int countbits(int num)
{
    int count=0;
    while((num&1)==0){
        count++;
        num=num>>1;
    }
    return 1<<count;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d",countbits(num)); 
    return 0;
}