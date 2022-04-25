// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "linkedlist.h"

//Definition of structures for the data
typedef struct student{
    int studentId;
    char* firstName;
    char* lastName;
}student;

typedef struct course{
    int crn;
    int creditHours;
    char* courseName;
}course;

typedef struct studentCourse{
    int studenId;
    course coursesId[4];
}studentCourse;

int tempStudentId=0;
int numMaxStudents = 10;
 int recordId=0;
//void addStudent(int studentId,char* name1,char* name2,int* num1);

//Functions for application
void addStudent(int studentId, char* firstName, char*LastName);
void printStudents(student *studentRecords, int numRecords);
void preintInvoice(student *studentRecords);
void addCourse(int studentNum, course *studentCourse);
bool validateCourse(int courseNum);

struct student studentRecords[10];
//student* studentRecords = malloc(numMaxStudents * sizeof *studentRecords);
struct studentCourse studentCourses[10];

int numMaxCourses = 4;
struct course courses[10] = {
                                {4587,4,"MAT 236"},
                                {4599,3,"COP 220"},
                                {8997,1,"GOL 124"},
                                {9696,3,"COP 100"},
                                {1232,5,"MAC 531"},
                                {9856,2,"STA 100"},
                                {8520,5,"TNV 400"},
                                {8977,1,"CMP 100"},
                            };
//courses[0].crn=4587;
//courses[0].creditHours=4;
//courses[0].courseName="MAT 236";

// Driver program
int main() {

  //Create an array of student structure records

  
  //student* studentRecords = malloc(numMaxStudents * sizeof *studentRecords);


 
  
  //student* studentList = malloc(2 * sizeof(student));
  
  //struct Node* head = NULL;
  //Create storage for students
  //List * studentList = makelist();
  //int selection,id,*num,*num1;
  int selection=-1;
  //selection=NULL;
  //id=NULL;
  //num=NULL;
  //num1=NULL;
  char *firstName, *lastName;
  int studentId = 0;
  //char choice;
  //int courses[4];
  //num = malloc(sizeof(int));
  //num1 = malloc(sizeof(int));


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
        //studentRecords[recordId].firstName=(char*)malloc(sizeof(char*));
        //studentRecords[recordId].lastName=(char*)malloc(sizeof(char*));
        
        printf("Enter the student's id:");
        //scanf("%d", &studentRecords[recordId].studentId);
        scanf("%d", &studentId);
        printf("Enter the student's first name:");
        //scanf("%s", studentRecords[recordId].firstName);
        scanf("%s", firstName=(char*)malloc(sizeof(char*)));
        printf("Enter the student's last name:");
        scanf("%s", lastName=(char*)malloc(sizeof(char*)));
        addStudent(studentId,firstName,lastName);
        //printf("Enter how many courses [%s %s] is taking (up to 4 courses)?\n", name1,name2);
        //  scanf("%d", num);
        //printf("Enter the courseID here:");
          //  scanf("%d", &studentRecords[recordId].courseId);

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
 //  exit;

  return 0;
}

void addStudent(int studentId, char* firstName, char* lastName) {
    //studentRecords[recordId].firstName=(char*)malloc(sizeof(char*));
    //studentRecords[recordId].lastName=(char*)malloc(sizeof(char*));
    studentRecords[recordId].firstName=firstName;
    studentRecords[recordId].lastName=lastName;
    return;
}

void addCourse(int studentId, course *studentCourse) {
    int numCourses=0;
    int tempCourseNum;
        printf("\nEnter how many courses [STUDENT_NAME] is taking (up to 4 courses)?");
            scanf("%d", &numCourses);
        if(numCourses < numMaxCourses)
        for(int i=0; i<numCourses;i++)
            printf("\nEnter the %d course number",i);
            scanf("%d", &tempCourseNum);
            if (validateCourse(tempCourseNum))
            //Add course to studentCourses array
                
    //Search for studentid in studentList
    //Add course to student's records
    return;

}

bool validateCourse(int courseNum) {
    //Check if course number is valid
    printf("Size of studentCourses array %lu",sizeof(studentCourses));
    for(int i=0; i<sizeof(studentCourses); i++) {
        if(courseNum == studentCourses[i].coursesId)
            printf("Found matching record\n");
            return true;
        else
            printf("No matching record\n");
    }
    return false;
}

void printStudents(student *studentRecords,int numRecords) {

    //Need a for loop to iterate array
    if(numRecords == 0)
        printf("No Records\n");
    else
    for(int i=0; i < numRecords ; i++) {
        printf("Student Records\n");
        printf("%s %s\n",studentRecords[i].firstName,studentRecords[i].lastName);
    }

    return;
}

// }