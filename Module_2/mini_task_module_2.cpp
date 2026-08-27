//mini project 
#include<stdio.h> 
int n,i; 
FILE *fl; 
struct student{ 
	int id,hours; 
	char name[10],course[10]; 
}; 
void addEntry(struct student std[],int n){ 
	for(i=0;i<n;i++){ 
		printf("Enter your id:"); 
		scanf("%d",&std[i].id); 
		printf("Enter your name:"); 
		scanf("%s",&std[i].name); 
		printf("Enter your course:"); 
		scanf("%s",&std[i].course); 
		printf("Enter your hour:"); 
		scanf("%d",&std[i].hours); 
		printf("----------------------------------\n");	 
	}	 
} 
void display(FILE *fl,struct student std[],int n){ 
 
    for(i=0;i<n;i++){ 
     printf("\nStudent %d\n", i + 1); 
     printf("ID: %d\n", std[i].id); 
     printf("Name: %s\n",std[i].name); 
	 printf("Course: %s\n",std[i].course); 
     printf("Hours: %d\n",std[i].hours); 
     printf("-------------------\n"); 
     fprintf(fl,"\nStudent %d\n", i + 1); 
     fprintf(fl,"ID: %d\n", std[i].id); 
     fprintf(fl,"Name: %s\n",std[i].name); 
	 fprintf(fl,"Course: %s\n",std[i].course); 
     fprintf(fl,"Hours: %d\n",std[i].hours); 
     fprintf(fl,"-------------------\n"); 
} 
} 
void result(FILE *fl,struct student std[],int n){ 
	int id,total=0; 
	printf("Enter id:"); 
	scanf("%d",&id); 
for(i=0;i<n;i++){ 
	if(std[i].id==id){ 
		printf("Hours: %d\n", std[i].hours); 
		fprintf(fl,"Hours: %d\n", std[i].hours); 
		total+=std[i].hours; 
	} 
} 
printf("Total Hours:%d",total); 
fprintf(fl,"Total Hours:%d",total); 
} 
main(){ 
int c;
struct student std[n]; 
fl = fopen("mini_task_module_2.txt","a"); 
	
printf("1.Add Entry"); 
printf("\n2.Display"); 
printf("\n3.Result Analysis"); 
printf("\n4.Exit");
printf("\nSelect your choice:");
scanf("%d",c);
if(c==1){
	printf("Enter number of student:"); 
	scanf("%d",&n); 
	addEntry(std,n);
}else if(c==2){
	display(fl,std,n);
}else if(c==3){
	result(fl,std,n); 
}else{
	printf("Exit Program....!");
}
}
