//2. Input a string of alphabets. Now count frequency of each alphabet present in that string.

#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    int freq[26]={0},x;
    printf("Enter a string of alphabets in lowercase only: ");
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            x=str[i]-'a';
            freq[x]++;
        }
    }
    for(int j=0;j<26;j++){
        printf("%c -> %d\n",j+'a',freq[j]);
    }
    return 0;
}