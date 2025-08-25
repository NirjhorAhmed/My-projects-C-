#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char str[100];
  int freq[26]={0};
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  for(int i = 0; str[i] != '\0'; i++){
    freq[str[i]-'a']++;
  } 
  for(int i = 0; i < 26; i++){
    if(freq[i]>0){
        printf("%c: %d\n", i+'a', freq[i]);
    }
}
   return 0;
}