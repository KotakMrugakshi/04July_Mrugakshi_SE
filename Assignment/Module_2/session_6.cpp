//Countdown timer(Session 06)
#include<stdio.h>
main(){
	
	int i=5,n;
	printf("below code using do while:\n");
	do{
		printf("%d\n",i);
		i--;
	}while(i>=1);
	printf("Enter Number:");
	scanf("%d",&n);
	printf("below code using for:\n");
	for(int j=1;j<=n;j++){
		printf("%d\n",j);
	}
	printf("below code using while:");
	while(i>=1){
		printf("%d\n",i);
		i--;
	}
		}
