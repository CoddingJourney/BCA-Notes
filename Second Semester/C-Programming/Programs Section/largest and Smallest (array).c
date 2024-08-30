// Smallest and Largest element in an array
#include<stdio.h>
main(){
	int i,n;
	printf("Enter the Number of Elemnts:");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("Enter the number %d:",i+1);
		scanf("%d",&num[i]);
		
	}
	int s=num[0],l=num[0];
	for(i=1;i<n;i++){
		if(num[i]<s){
			s=num[i];
		}
		if(num[i]>l){
			l=num[i];
		}
	}
	printf("The smallest Number in the given array is %d \n",s);
	printf("The Largest Number in the given array is %d",l);
}

