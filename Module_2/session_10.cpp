//Session 10
#include<stdio.h>
#include<string.h>
main(){
	char name[10] = "Hello",cName[10],s[10]= "hello",s1[7]="stop";
	int a;
	
	printf("Original Name:%s",name);
	printf("=================strcpy(String coped)================");
	printf("\nCopied Name:%s",strcpy(cName,name));
	printf("\n=================strlen(String Length)================");
	printf("\nString Length:%d",strlen(name));
	printf("\n=================strcmp(String Compares)================");
	if(a!=0){
	printf("\nCompare Two Strings are not equal:%d",strcmp(name,s));
}else{
	printf("\nCompare Two Strings are equal:%d",strcmp(name,s));
}
printf("\n=================strcat(String Compares)================");
printf("\nCopied Name:%s",strcat(s1,s));
printf("\nRev. String:%s",strrev(s1));
}
