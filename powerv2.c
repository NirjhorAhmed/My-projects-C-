#include<stdio.h>
#include<math.h>
#include<string.h>

int countnum(int n){
    return (n>0 && (~n & (n-1))==n-1);
}

int main()
{
    int num;
    scanf("%d", &num);
    if(countnum(num)){
        printf("YES\n");
    }
    else{
        printf("NO\n"); 
    }
}