#include<stdio.h>
void main()
{
int digit=0,i,num;
scanf("%d",&num); 
while(num!=0)
{
num=num/10;
digit++;
}
printf("%d",digit); 
}
	
