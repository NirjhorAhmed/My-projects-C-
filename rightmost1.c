#include<stdio.h>

int change(int n)
{
    return n & (n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", change(n));  
    return 0;
}