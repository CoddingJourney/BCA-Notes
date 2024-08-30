// finding the given number is prime or not
 
 #include<stdio.h>
 main(){
 	int n,count=0,i;
 	printf("Enter the Number :");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		if(n%i==0){
 			count ++;
		 }
	}
		(count==2)?printf("%d is Prime Number ",n):printf("%d is not Prime Number",n);
		 
	 
 }
