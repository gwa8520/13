#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[20];
	double grade;
}; 


int main(int argc, char *argv[]) {
	
	//instance
	struct student s1={2310318,"Hyun",4.5};
	
	s1.ID= 123455;
	s1.name[0]="Hyun";
	s1.grade=4.5;

	printf("ID: %i\n",s1.ID);
	printf("name:%s\n",s1.name);
	printf("grade: %f\n",s1.grade);
	
	strcpy(s1.name,"Hyun");
	printf("name2:%s");
	return 0;
}
