#include<stdio.h>
#include<string.h>

int main(void){
	int n,sum1=0,sum2=0,sum3=0;
	printf("Enter the size of the charecter array of 0 and 1: ");
	scanf("%d",&n);
	char arr[n];
	printf("Enter the string of 0 and 1: \n");
	scanf("%s",arr);
	int a=strlen(arr);
	for(int i=1;i<=a;i+=1){
		if(arr[i]=='1'){
			sum1=sum1+1;
		}
	}
	printf("total no. of 1 for starting string index 1: %d\n",sum1);
	for(int i=1;i<=a;i+=4){
		if(arr[i]=='1'){
			sum2=sum2+1;
		}
		if(arr[i+1]=='1'){
			sum2=sum2+1;
		}
	}
	printf("total no. of 1 for starting string index 2: %d\n",sum2);
	for(int i=4;i<=a;i+=8){
		if(arr[i]=='1'){
			sum3=sum3+1;
		}
		if(arr[i+1]=='1'){
			sum3=sum3+1;
		}
		if(arr[i+2]=='1'){
			sum3=sum3+1;
		}
		if(arr[i+3]=='1'){
			sum3=sum3+1;
		}
		
	}
	printf("total no. of 1 for starting string index 4: %d\n",sum3);
	
	return 0;
	}
