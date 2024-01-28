#include<stdio.h>
#include<ctype.h>
#define ALPHABET_SIZE 26

void countAlphabetsFrequency(const char * str){
	int frequency[ALPHABET_SIZE]={0};
	for(int i=0;str[i]!= '\0';i++){
		char ch=tolower(str[i]);

		if(ch>='a' && ch<='z'){
			frequency[ch-'a']++;
		}
	}
	printf("Alphabet Frequency: \n");
	for(int i=0;i<ALPHABET_SIZE;i++){
		if(frequency[i]>0){
			printf("%c: %d\n",'a'+i,frequency[i]);
		}
	}
}

int main(void){
	char str[100];
	printf("Enter a string of alphabets: ");
	scanf("%[^\n]",str);
	countAlphabetsFrequency(str);
	return 0;
}
