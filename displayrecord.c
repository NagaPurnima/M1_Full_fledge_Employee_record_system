// C program for the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "displayrecord.h"

// Structure of the employee


FILE *fp, *ft;

// Function to add the records


// Function to display the record


// Function to modify the record


// Driver code
int main()
{
	int choice;

	// opening the file
	fp = fopen("data.txt", "rb+");

	// showing error if file is
	// unable to open.
	if (fp == NULL) {
		fp = fopen("data.txt", "wb+");
		if (fp == NULL) {
			printf("\nCannot open file...");
			exit(1);
		}
	}

	system("Color 3F");
	printf("\n\n\n\n\t\t\t\t============="
		"============================="
		"===========");
	printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~");
	printf("\n\t\t\t\t==================="
		"============================="
		"=====");
	printf("\n\t\t\t\t[|:::>:::>:::>::> "
		"EMPLOYEE RECORD <::<:::<:::"
		"<:::|]\t");
	printf("\n\t\t\t\t==================="
		"============================="
		"=====");
	printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~");
	printf("\n\t\t\t\t====================="
		"==============================\n");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\t"
		"\n\n\t\t\t\t");

	system("pause");

	while (1) {
		// Clearing console and asking the
		// user for input
		system("cls");
		gotoxy(30, 10);
		printf("\n1. ADD RECORD\n");
		gotoxy(30, 12);
		printf("\n2. DELETE RECORD\n");
		gotoxy(30, 14);
		printf("\n3. DISPLAY RECORDS\n");
		gotoxy(30, 16);
		printf("\n4. MODIFY RECORD\n");
		gotoxy(30, 18);
		printf("\n5. EXIT\n");
		gotoxy(30, 20);
		printf("\nENTER YOUR CHOICE...\n");
		fflush(stdin);
		scanf("%d", &choice);

		// Switch Case
		switch (choice) {

		case 3:

			// Display the records
			displayrecord();
			break;



		default:
			printf("\nINVALID CHOICE...\n");
		}
	}

	return 0;
}
