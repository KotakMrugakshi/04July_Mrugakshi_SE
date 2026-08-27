//Session 14
#include<stdio.h>
main(){
	char item[3][20]= {"Burger", "Pizza", "Fries"};
	int price[3] = {120, 250, 90};
	int total=0,n,i;
	
	for(i=0;i<3;i++){
		total+=price[i];
	}
	printf("Total:%d",total);
	formatFollowersCount(1500);      // Output: 1.5K
    formatFollowersCount(1200000);   // Output: 1.2M
    formatFollowersCount(999);       // Output: 999
    for (i = 1; i <= 10; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
}
void evenNum(){
	printf("Enter Number:");
	scanf("%d",&n);
	if(n%2==0){
	printf("N is Even number");
	}else{
		printf("N is odd number");
	}
	void formatFollowersCount(double count)
{
    if (count < 1000)
    {
        printf("%.0f\n", count);
    }
    else if (count < 1000000)
    {
        printf("%.1fK\n", count / 1000);
    }
    else
    {
        printf("%.1fM\n", count / 1000000);
    }
}
}
