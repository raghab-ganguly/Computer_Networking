/* Write a C code to encode a user provided dataword using Even and Odd Parity bit procedure.
[Take a bit stream as input. Find even parity bit, even parity codeword and odd parity bit, odd parity
codeword.] */

#include<stdio.h>
#include<string.h>

int check_1(char str[]){
    int count,i = 0;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='1'){
            count++;
        }
    }
    return count;
}

int check_odd_even(int count){
    if(count % 2 == 0)
        return 1; //even
    else
        return 0;//odd
}

void even_parity(char str[],int x){
    char bit_even[]="0";
    char bit_odd[]="1";
    char codeWord[strlen(str)+1];
    strcpy(codeWord,str);

    if(x){
        printf("The even parity bit: %s\n",bit_even);
        strcat(codeWord,bit_even);
        printf("The code word: %s\n",codeWord);
    }
    else{
        printf("The even parity bit: %s\n",bit_odd);
        strcat(codeWord,bit_odd);
        printf("The code word: %s\n",codeWord);
    }
}

void odd_parity(char str[],int x){
    char bit_even[]="1";
    char bit_odd[]="0";
    char codeWord[strlen(str)+1];
    strcpy(codeWord,str);

    if(x){
        printf("The odd parity bit: %s\n",bit_even);
        strcat(codeWord,bit_even);
        printf("The code word: %s\n",codeWord);
    }
    else{
        printf("The odd parity bit: %s\n",bit_odd);
        strcat(codeWord,bit_odd);
        printf("The code word: %s\n",codeWord);
    }
}

int main(void){
    char str[100];
    printf("Enter the dataword: ");
    scanf("%s",str);
    
    int count=check_1(str);
    int x=check_odd_even(count);
    even_parity(str,x);
    odd_parity(str,x);

    return 0;
}