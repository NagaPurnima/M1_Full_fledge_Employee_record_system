
struct emp {
	char name[50];
	float salary;
	int age;
	int id;
};
struct emp e;


long int size = sizeof(e);
FILE *fp, *ft;


// Function to add the records
void addrecord()
{
	system("cls");
	fseek(fp, 0, SEEK_END);
	char another = 'y';

	while (another == 'y') {
		printf("\nEnter Name : ");
		scanf("%s", &e.name);

		printf("\nEnter Age : ");
		scanf("%d", &e.age);

		printf("\nEnter Salary : ");
		scanf("%f", &e.salary);

		printf("\nEnter EMP-ID : ");
		scanf("%d", &e.id);

		fwrite(&e, size, 1, fp);

		printf("\nWant to add another"
			" record (Y/N) : ");
		fflush(stdin);

		scanf("%c", &another);
	}
}
