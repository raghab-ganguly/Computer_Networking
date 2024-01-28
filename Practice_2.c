#include<stdio.h>
#include<string.h>

int main(void){
	int n,sum=0;
	printf("Enter the size of the charecter array of 0 and 1: ");
	scanf("%d",&n);
	char arr[n];
	printf("Enter the string of 0 and 1: \n");
	scanf("%s",arr);
	int a=strlen(arr);
	for(int i=0;i<=a;i++){
		if(arr[i]=='1'){
			sum=sum+1;
		}
		
	}
	printf("In this String,total no. of 1 is: %d",sum);
	return 0;
}
			
	
	
