#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}