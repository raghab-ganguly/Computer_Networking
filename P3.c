//Input a string of 0 and 1. Count number of 1’s present in that string.

#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    int len,count=0;
    printf("Enter a String of 0 and 1: ");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='1'){
            count++;
        }
    }
    printf("Number of 1's present in that string is : %d",count);
    return 0;
}