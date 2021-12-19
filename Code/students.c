#include<stdio.h>

struct student {
	char name[30];
	int RN;
	int grade;
}typedef student;

main()
{
	int counter, N;
	
	printf("Give the number of students: ");
	scanf("%d", &N);
	
	student T[N];
	
	for (counter = 0; counter < N; counter++)
	{
		printf("\nGive the name of student number %d: ", counter + 1);
		scanf("%s", T[counter].name);
		printf("Give the registration number of student number %d: ", counter + 1);
		scanf("%d", &T[counter].RN);
		printf("Give the grade of student number %d: ", counter + 1);
		scanf("%d", &T[counter].grade);
	}
	
	printf("\nStudents: \n");
	for (counter = 0; counter < N; counter++)
	{
		printf("Name: %s\n", T[counter].name);
		printf("Registration Number: %d\n", T[counter].RN);
		printf("Grade: %d\n", T[counter].grade);
		printf("\n");
	}
	return 0;
}

