#include <stdio.h>
#include <string.h>


// student structure
//struct Student...

struct Student {
	char firstName[100];
	char lastName[100];
	int age;
	int id;
};

void printStudent(struct Student* student)
{
	printf("-----student-----\n");
	printf("first name: %s\n",  student->firstName);
	printf("last name: %s\n", student->lastName);
	printf("age: %d\n", student->age);
	printf("Id: %d\n", student->id);
	
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
for (int i = 0; i < num; i++){

printStudent(&students[i]);
}

}


int main()
{

  // an array of students
  //xxx students;

struct Student students[100];
char input[256];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
   char input[256];
	printf("  first name: ");
      	fgets(input, 256, stdin);
	sscanf(input, "%s", students[numStudents].firstName);

	printf("\nlastname: ");
	fgets(input, 256, stdin);
	sscanf(input, "%s",&students[numStudents].lastName);

	printf("\nage: ");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &students[numStudents].age);
	
	printf("\nid: ");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &students[numStudents].id);

	numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
