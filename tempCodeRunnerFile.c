#include<stdio.h>
#include<math.h>    

int overunder(int n,int m){
    int sum=m+n;
    if((n>0 && m>0 && sum<0 )|| (n<0 && m<0 && sum>0)){
        return -1;
    }
    return sum;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",overunder(n,m));
    return 0;
}