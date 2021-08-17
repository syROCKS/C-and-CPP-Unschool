#include <stdio.h>
 
struct employee {
	char name[20];
	int empId;
	int experience;
	int salary;
};
 
int main() {
	struct employee e[2];
	for(int i=0;i<2;i++) {
		printf("\nEnter Details of Employee %d\n",i+1);
		fflush(stdin);
		printf("\tEnter name of the employee: ");
		gets(e[i].name);
		printf("\tEnter employee id: ");
		scanf("%d",&e[i].empId);
		printf("\tEnter experience(in years): ");
		scanf("%d",&e[i].experience);
		printf("\tEnter salary: ");
		scanf("%d",&e[i].salary);
	}
	printf("\n\n");
	for(int i=0;i<2;i++) {
		printf("\nDetails of Employee %d\n",i+1);
		printf("\tName of the employee: %s\n",e[i].name);
		printf("\tEmployee id: %d\n",e[i].empId);
		printf("\tExperience(in years): %d\n",e[i].experience);
		printf("\tSalary: %d\n",e[i].salary);
	}
	return 0;
}