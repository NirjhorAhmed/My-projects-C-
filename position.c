#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int position(int n){
    int val=1;
    int pos=1;
    if(n==0||(n&(n-1))!=0){
        return -1;
    }
    while(val & n==0){
        val=val<<1;
        pos++;
    }
    return pos;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", position(n));
    return 0;
}