#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int mul(int a,int b){
    int res=0;
    while(b>0){
        if(b&1){
            res+=a;
        }
        a<<=1;
        b>>=1;
    }
    return res;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int res=mul(n,m);
    printf("%d\n",res);
    return 0;
}