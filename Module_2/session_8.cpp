// Session 08
#include<stdio.h>
int a,b,c,d;

void add(){
	int a=20,b=10;
	printf("Value of A:20");
	printf("\nValue of B:10");
	printf("\nAdd:%d",a+b);
}

void mul(int a, int b){
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("\nEnter value of B:");
	scanf("%d",&b);
	printf("Mul:%d\n",a*b);
}

main(){
	printf("1.Function call by reference");
	printf("\n2.Function call by value");
	printf("\nSelect your choice:");
	scanf("%d",&d);
	if(d==1){
		add();
	}else{
		mul(a,b);
	}	
}
