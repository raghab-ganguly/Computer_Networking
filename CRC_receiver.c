#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[20] , pol[10], temp[20];
	printf("Enter a Codeword and polynomial coefficients respectively :\n");
	scanf("%s",&str);
	scanf("%s",&pol);
	int len=strlen(pol),check=0;
	strcpy(temp,str);
	for(int i=0;i<strlen(str)-(len-1);i++){
		if(temp[i]=='1'){
			for(int j=0;j<len;j++){
				if((int)temp[i+j] ^ (int) pol[j]) temp[i+j]='1';
				else temp[i+j]='0';
			}
		}
	}
	for(int i=0;i<strlen(temp);i++)	if(temp[i]=='1') check=1;
	if(check){
		printf("Original data not received ");
	}
	else{
		printf("Original data received ");
		for(int i=0;i<strlen(str)-(len-1);i++)  printf("%c",str[i]);
	}
}
