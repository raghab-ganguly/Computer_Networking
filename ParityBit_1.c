#include<stdio.h>
#include<string.h>
int countNo1(char str[]){
	int count=0;
	for(int i=0;i<=(strlen(str));i++){
		if(str[i]=='1'){
			count=count+1;
		}
	}
	return count;
}

void evenParity(char str[],int n){
		char b1[]="0";
		char b2[]="1";
		char cw[strlen(str)+1];
		
		strcpy(cw,str);
		if(n%2==0){
			printf("Even Parity bit is: %s\n",b1);
			strcat(cw,b1);
			printf("The code Word of Even parity is : %s\n",cw);
		}
		else{
			printf("Even Parity bit is: %s\n",b2);
			strcat(cw,b2);
			printf("The code Word of Even parity is : %s\n",cw);
		}
		
}

void oddParity(char str[],int n){
		char b1[]="1";
		char b2[]="0";
		char cw[strlen(str)+1];
		
		strcpy(cw,str);
		if(n%2==0){
			printf("Even Parity bit is: %s\n",b1);
			strcat(cw,b1);
			printf("The code Word of Even parity is : %s\n",cw);
		}
		else{
			printf("Even Parity bit is: %s\n",b2);
			strcat(cw,b2);
			printf("The code Word of Even parity is : %s\n",cw);
		}
		
}
	

int main(void){
	int x,no_1,n,y;
	printf("Enter the size of the 0 and 1 bit strem: ");
	scanf("%d",&x);
	char str[x];
	printf("Enter the bit stream:");
	scanf("%s",str);
	char cw[strlen(str)+1];
	
	no_1=countNo1(str);
	
	do{
		printf("Enter the choice: 1 for Even and 2 for Odd parity code word:");
		scanf("%d",&n);
		switch(n){
			case 1:
				evenParity(str,no_1);
				break;
			case 2:
				oddParity(str,no_1);
			default:
				printf("you Entered invalic no.!!!\n");
		}
		printf("For continuation press 1 or press 0 for exit:");
		scanf("%d",&y);
	}while(y);
			
	
	return 0;
}
