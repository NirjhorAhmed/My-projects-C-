#include<stdio.h>
#include<limits.h>  

int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    printf("a&b = %d\n", n&m);  
    printf("a|b = %d\n", n|m);
    printf("a^b = %d\n", n^m);
    printf("~a= %d and ~b=%d\n",~n,~m);
    printf("b<<1 = %d\n", m<<1);    
    printf("b>>1 = %d\n", m>>1);
    printf("a<<5 = %d\n", n<<1);
    printf("a>>7 = %d\n", n>>1);
    return 0;
}