#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[20] , pol[10];
	printf("Enter a Dataword and polynomial respectively :\n");
	scanf("%s",&str);
	scanf("%s",&pol);
	int redun=strlen(pol)-1;
	for(int i=1;i<=redun;i++) strcat(str,"0");
	char temp[20];
	strcpy(temp,str);
	for(int i=0;i<strlen(str)-redun;i++){
		if(temp[i]=='1'){
			for(int j=0;j<redun+1;j++){
				if((int)temp[i+j] ^ (int) pol[j]) temp[i+j]='1';
				else temp[i+j]='0';
			}
		}
	}
	for(int i=strlen(temp)-redun; i<strlen(temp);i++){
		str[i]=temp[i];
	}
	printf("CODEWORD : %s",str);
}
