//Session 09
#include<stdio.h>
main(){
	int n,i;
	float sum=0,avg;
	
	printf("Enter number of screen time:");
	scanf("%d",&n);
	
	float st[n];
	
	for(i=0;i<n;i++){
		printf("\nEnter screen time for day %d :",i+1);
		scanf("%f",&st[i]);
		
		sum+=st[i];
	}
	avg=sum/n;
	
	for(i=0;i<n;i++){
		printf("\nDay %d : %.2f hours\n",i+1,st[i]);
	}
	printf("\nTotal screen time:%.2f hours \n",sum);
	printf("Average screen time:%.2f hours per day\n",avg);
}
