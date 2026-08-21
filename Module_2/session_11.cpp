//Session 11(Swap number using pointer)
#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
main(){
	int x,y;
	printf("Enter Number of X: ");
	scanf("%d",&x);
	printf("Enter Number of Y: ");
	scanf("%d",&y);
	
	printf("Befor swapping:");
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	
	swap(&x,&y);
	
	printf("\nAfter swapping:");
	printf("\nx=%d",x);
	printf("\ny=%d",y);
	
}
