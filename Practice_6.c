#include<stdio.h>
#include<string.h>

void divideIntoSegments(const char* str,int segmentLength){
	int len=strlen(str);
	
	if(len % segmentLength != 0){
		printf("Cannot divide the string into segments of equal length.\n");
		return;
	}

	printf("Segment of length %d:\n",segmentLength);
	
	for(int i=0;i<len;i+=segmentLength){
		for(int j=0;j<segmentLength;j++){
			printf("%c",str[i+j]);
		}
		printf("\n");
	}
}

int main(void){
	char str[100];
	int segmentLength;
	printf("Enter the string of 0s and 1s: ");
	scanf("%s",str);
	printf("Enter the Segment length: ");
	scanf("%d",&segmentLength);

	divideIntoSegments(str,segmentLength);
	return 0;
}
	
