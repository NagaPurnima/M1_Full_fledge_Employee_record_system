/*
struct emp {
	char name[50];
	float salary;
	int age;
	int id;
};
struct emp e;
*/
#include<stdio.h>
#include<conio.h>

void displayrecord()
{
	system("cls");

	// sets pointer to start
	// of the file
	rewind(fp);

	printf("\n========================="
		"==========================="
		"======");
	printf("\nNAME\t\tAGE\t\tSALARY\t\t"
		"\tID\n",
		e.name, e.age,
		e.salary, e.id);
	printf("==========================="
		"==========================="
		"====\n");

	while (fread(&e, size, 1, fp) == 1)
		printf("\n%s\t\t%d\t\t%.2f\t%10d",
			e.name, e.age, e.salary, e.id);

	printf("\n\n\n\t");
	system("pause");
}
