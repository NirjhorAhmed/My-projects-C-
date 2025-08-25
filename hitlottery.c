#include<stdio.h>
#include<math.h>

int main()
{
    int num,count=0;
    scanf("%d", &num);
    count+=num/100;
    num=num%100;

    count+=num/20;
    num=num%20;

    count+=num/10;
    num=num%10;

    count+=num/5;
    num=num%5;

    count+=num/1; 
    num=num%1;
    
    printf("%d\n", count);
    return 0;
}