// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//Definition of structures for the data
typedef struct student{
    int studentId;
    char* firstName;
    char* lastName;
    int *courseId;
}student;

typedef struct course{
    int crn;
    int creditHours;
    char* course;
}course;

typedef struct studentRecord{
    student* studentList;
    course* studentCourse;
}studentRecord;

int tempStudentId=0;
int numMaxStudents = 10;
//void addStudent(int studentId,char* name1,char* name2,int* num1);

//Functions for application
void printStudents(student *studentList, int numRecords);
void printInvoice(student *studentList);
void addCourse(student *studentList, course *studentCourse);




// Driver program
int main() {

  studentCourses[0].crn=4587;
  studentCourses[0].creditHours=4;
  studentCourses[0].course="MAT 236";

  //Create an array of student structure records

  
  student* studentRecords = malloc(numMaxStudents * sizeof *studentRecords);

  int numMaxCourses = 8;
  //Create storage for course catalogue
  course* courses = malloc(numMaxCourses * sizeof *courses);

  int recordId=0;
  
  //student* studentList = malloc(2 * sizeof(student));
  
  //struct Node* head = NULL;
  //Create storage for students
  //List * studentList = makelist();
  //int selection,id,*num,*num1;
  int selection;
  //selection=NULL;
  //id=NULL;
  //num=NULL;
  //num1=NULL;
  //char name1[10], name2[10], choice;
  char choice;
  //int courses[4];
  //num = malloc(sizeof(int));
  //num1 = malloc(sizeof(int));

//   int studentId = 0;
//   char* firstName = "John";
//   char* lastName = "Doe";
//   int courses[] = {20,30,40,50};
  //int *courseId = &courses; 

  while(selection != 0) {
    printf("Welcome!\nChoose from the following options:\n 1- Add a new student\n 2- Add/Delete a new course\n 3- Search for a student\n 4- Print a fee invoice \n 0- Exit Program");
    printf("\nEnter your selection:");
        scanf("%d", &selection);
    //printf("Enter the Student's ID:");
    //     scanf("%d", &id);
    if (selection==1){
        studentRecords[recordId].firstName=(char*)malloc(sizeof(char*));
        studentRecords[recordId].lastName=(char*)malloc(sizeof(char*));
        
        printf("Enter the student's id:");
        scanf("%d", &studentRecords[recordId].studentId);
        printf("Enter the student's first name:");
        scanf("%s", studentRecords[recordId].firstName);
        printf("Enter the student's last name:");
        scanf("%s", studentRecords[recordId].lastName);
        //printf("Enter how many courses [%s %s] is taking (up to 4 courses)?\n", name1,name2);
        //  scanf("%d", num);
        printf("Enter the courseID here:");
            scanf("%d", &studentRecords[recordId].courseId);

        recordId++;

        //   printf("Student added successfully!");
        //   exit;
        }
    else if (selection == 2){
        //Call and add function to print students current courses 
        //CourseNumber, Prefix, Credit Hours

        //Add options to get for adding, deleting or canceling adding course options
        //Use a switch/case for gathering option chosen

        //addCourse(studentRecords,studentCourse);
    }
    else if (selection == 4){
        printStudents(studentRecords,recordId);
    }
  }
   exit;

  return 0;
}

void addCourse(int studentId, course *studentCourse) {
    //Search for studentid in studentList
    //Add course to student's records

}

void printStudents(student *studentList,int numRecords) {

    //Need a for loop to iterate array
    if(numRecords == 0)
        printf("No Records\n");
    else
    for(int i=0; i < numRecords ; i++) {
        printf("Student List\n");
        printf("%s %s\n",studentList[i].firstName,studentList[i].lastName);
    }

    return;
}

// }