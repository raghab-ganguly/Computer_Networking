#include<stdio.h>
#include<math.h>
int main(void){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	int n,i;
	for(n=0;n<x;n++){
		int temp=pow(2,n);
		if(temp==x){
			printf("the number is power of 2\n");
			i=n;
		}
		else
			continue;
	}
	
	return 0;
}

