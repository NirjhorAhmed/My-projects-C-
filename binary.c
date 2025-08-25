#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    

char * countbit(int num)
{
    char *string= (char *)malloc(32*sizeof(char));
    string[32] = '\0'; 
    for(int i=31;i>=0;i--){
        if(num & (1<<i)){
            string[31-i] = '1';
        }
        else{
            string[31-i] = '0';    
        }
    }
    return string;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("Binary representation of %d is: %s ", num,countbit(num));
    return 0;
}