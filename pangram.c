#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int arr[27]={0};
    for(int i=0;i<n;i++){
        char ch=tolower(str[i]);
        if(ch>='a' && ch<='z'){
            arr[ch-'a']++;
        }   
    }
    for(int i=1;i<=26;i++){
        if(arr[i]==0){
            printf("NO");
            return 0;
        }
        else{
            printf("YES");
            return 0;
        }   
    }
}