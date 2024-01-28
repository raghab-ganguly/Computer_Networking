//1. Check whether a number is power of 2 or not.

#include<stdio.h>
#include<math.h>
int main(void){
    int x,temp=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("\n");
    for(int i=1;i<x;i++){
        if(x == (int) pow(2,i)){
            printf("The number is power of 2 and the power value is %d\n",i);
            temp=1;
        }
        
    }
    if(temp==0){
        printf("The number is not power of 2\n");
    }
        
    return 0;
}