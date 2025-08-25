#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0; i <= n; i++)
    {
        a[i]=0;
    }
    int x;
    scanf("%d", &x);
    int b[x];
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &b[i]);
        a[b[i]]=1;  
    }
    int y;
    scanf("%d", &y);
    int c[y];
    for(int i=0;i<y;i++){
        scanf("%d", &c[i]);
        a[c[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");  
    return 0;
}