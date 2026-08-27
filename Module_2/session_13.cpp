//session 13
#include<stdio.h>
main(){
	char name[20];
	FILE *fl;
	
	fl = fopen("session_13.txt","w");
	printf("File is created");
	printf("\nEnter your name:");
	scanf("%s",name);
	fprintf(fl,"Hello %s",name);
	printf("----------------Read------------------\n");
	fl = fopen("session_13.txt","r");
	fscanf(fl,"%s",name);
	printf("----------------Append------------------\n");
	fl = fopen("session_13.txt","a");
	fprintf(fl," Good Evening...!");
	fclose(fl);
}
