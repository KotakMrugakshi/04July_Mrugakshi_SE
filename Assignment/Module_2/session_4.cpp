//simple calculation

#include<stdio.h>
main(){
	
	int n1,n2,c;
	
	printf("Enter Number 1:");
	scanf("%d",&n1);
	printf("Enter Number 2:");
	scanf("%d",&n2);
	
	
	if(n1!=0 && n2!=0){
		printf("1.Add\n2.Sub\n3.Mul\n4.Div");
	    printf("\nSelect your choice:");
	    scanf("%d",&c);
		
		if(c==1){
			printf("Value of Add:%d",n1+n2);
		}else if(c==2){
			printf("Value of Sub:%d",n1-n2);
		}else if(c==3){
			printf("Value of Mul:%d",n1*n2);
		}else if(c==4){
			printf("Value of Div:%d",n1/n2);
		}
	}else{
		printf("Oops!invalid input");
	}
	
}
