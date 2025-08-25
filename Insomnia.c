#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c,d,n,count=0;  
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &n);
    for(int i=1;i<=n;i++){
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}