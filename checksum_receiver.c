#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
char data[100];
int dl,j,k,c,sum[100],t,sl,i;
printf("\n enter codeword:\n");
scanf("%s",data);
dl=strlen(data);
//*** this done to mandet seglen must in pow of 2
while(1){
printf("\n entr the segment length \n");
scanf("%d",&sl);
for(i=1;i<=sl;i++)
{
if(pow(2,i)==sl)
{

}
if(j==1)
else
}

break;
j=1;
break;

printf("\n segment length must in pow of 2\n");

}

for(i=0;i<sl;i++)
sum[i]=0;
for(i=dl;i>0;i=i-sl)
{

c=0;
k=sl-1;
for(j=i-1;j>=i-sl;j--)
{
t=(sum[k]+(data[j]-48)+c);
sum[k]=t%2;
c=t/2;
k--;
}
if(c==1)
{

}
}
j=0;

for(j=sl-1;j>=0;j--)
{
t=sum[j]+c;
sum[j]=t%2;
c=t/2;
}

for(i=0;i<sl;i++){
if(sum[i]!=1){
j++;break;}
}
if(j==0)
{

}
else
{
}
printf("\n data recv ok \n");
printf("\n ACTUAL data IS: \n");
for(i=0;i<dl-sl;i++)
printf("%c ",data[i]);

printf("\n data recv wrong \n");

return(0);
}