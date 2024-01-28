/* Input a string of 0 and 1.
a. Divide it into segments of equal length.
b. If the string length is not an exact multiple of segment length then use left padding with
0s.
c. Now count number of 1’s present in each segment.
Sample Input-output:
Input: 1000111010
Segment length:4
Output:
Segment 1: 0010 
           ^^(padding with two 0's)
Segment 2: 0011
Segment 3: 1010
Frequency:
Segment 1: 1
Segment 2: 2
Segment 3: 2 */

#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    int seglen,i,j=0,count=1;
    int count_1 =0;
    char padstr[100];
    
    printf("Input: ");
    gets(str);
    printf("segment length: ");
    scanf("%d",&seglen);
    printf("\n");
    if(strlen(str)%seglen==0){
        for(i=1;i<=(strlen(str)/seglen);i++){
            printf("Segment %d : ",i);
            for(j;j<strlen(str);j++){
                printf("%c",str[j]);
                if(count==seglen){
                    break;
                }
                count++;
            }
            j+=1;
            count=1;
            printf("\n");
        }
    }
    if(strlen(str) % seglen != 0){
        int pad=seglen-(strlen(str) % seglen);
        for(int i=0;i<pad;i++){
            padstr[i]='0';
        }
        strcat(padstr,str);
        for(i=1;i<=(strlen(padstr)/seglen);i++){
            printf("Segment %d : ",i);
            for(j;j<strlen(padstr);j++){
                printf("%c",padstr[j]);
                if(count==seglen){
                    break;
                }
                count++;
            }
            j+=1;
            count=1;
            printf("\n");
        }
    }

    printf("\n");
    printf("Frequency:\n");

    if(strlen(str)%seglen==0){
        for(i=1;i<=(strlen(str)/seglen);i++){
            printf("Segment %d : ",i);
            for(j;j<strlen(str);j++){
                if(str[j]=='1'){
                    count_1++;
                }
                if(count==seglen){
                    break;
                }
                count++;
            }
            printf("%d",count_1);
            j+=1;
            count=1;
            count_1 =0;
            printf("\n");
        }
    }

    return 0;
}