#include<stdio.h>
#include<string.h>

void dataWord(char codeWord[]){
	int s=strlen(codeWord);
	
	for(int i=0;i<s-1;i++){
		printf("%c",codeWord[i]);
	}
	printf("\n\n");
}
int countNo1(char codeWord[]){
	int count=0;
	for(int i=0;i<=(strlen(codeWord));i++){
		if(codeWord[i]=='1'){
			count=count+1;
		}
	}
	return count;
}


int main(void){
	int s,x,y;
	char codeWord[100];
	
	do{
		printf("Enter the code Word: ");
		scanf("%s",codeWord);
		s= countNo1(codeWord);
		printf("Enter the choice 1 for Even Parity and 2 for Odd Parity: ");
		scanf("%d",&x);
		switch(x){
			case 1:
					
					if(s%2 == 0){
						printf("ACCEPTED\n");
						dataWord(codeWord);
					}
				
					else{
						printf("REJECTED\n");
					}
					break;
				
			case 2:
					if(s % 2 != 0){
						printf("ACCEPTED\n");
						dataWord(codeWord);
					}
					else{
						printf("REJECTED\n");
					}
					break;
			default:
					printf("you entered a wrong no.");
		}
	printf("please enter 1 for continuation or enter 0 for stop: ");
	scanf("%d",&y);
		
	}while(y);	
		
	return 0;
}
