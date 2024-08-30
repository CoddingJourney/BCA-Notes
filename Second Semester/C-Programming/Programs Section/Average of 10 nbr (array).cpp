// Average of 10 Numbers
#include<stdio.h>
main(){
	int i,n[9],sum=0;
	float avg;
   for (i=0;i<10;i++){
   	printf("Enter the Number %d:",i+1);
   	scanf("%d",&n[i]);
   	sum+=n[i];
   	avg=sum/10;
   	
   }
   printf("The Average of the 10 integer is %.2f",avg);
}
