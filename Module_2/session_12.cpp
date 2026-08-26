//Session 12
#include<stdio.h>
struct grade{
	char g;
};
struct student{
	char name[10];
	int mark;
	struct grade gra;
};
main(){
	struct student std;
	printf("Enter your Name:");
	scanf("%s",&std.name);
	printf("Enter your marks:");
	scanf("%d",&std.mark);
	printf("Enter your grade:");
	scanf("%s",&std.gra.g);
	
	printf("\n=================================\n");
	printf("\nName:%s",std.name);
	printf("\nMarks:%d",std.mark);
	printf("\nGrade:%c",std.gra.g);
	
}
