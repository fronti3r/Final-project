// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

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
    int studentId;
    int coursesId[4];
}studentCourse;

int tempStudentId=0;
int numMaxStudents = 10;
int recordId=0;
int studentRecordStartIndex=5;
int maxNumberofCourses = 4;
int sizeofArray = 3;
float costPerCreditHour = 120.25;
float studentFees = 35.00;
//void addStudent(int studentId,char* name1,char* name2,int* num1);

//Functions for application
void addStudent(int studentId, char* firstName, char*LastName);
void printStudents();
void printStudent(int studentId);
bool searchStudent(int studentId);
void printInvoice(int studentId);
void addCourse(int studentId);
course* getCourseInfo(int crn);
void printRegisteredCourses(int studentId);
bool validateCourse(int courseNum);
void printAvailableCourses();
void printLine();
void printHeader();
void delay(int milliseconds);

//Build an array of student records and fill in initial values.
struct student studentRecords[10] = {{1254,"Zayd","Ali"},
                                    {6589,"Nimra","Bilal",},
                                    {1587,"Peta", "Chelsea"},
                                    {6089,"Rachel","Cones"},
                                    {7136,"Cory","Becka"}
                                    };
//int studentRecordStartIndex=5;
//student* studentRecords = malloc(numMaxStudents * sizeof *studentRecords);

//Build an array of students registered for courses and fill in with initial values.
struct studentCourse studentCourses[10] = {
                                        {1234,{4587,4599,8997}},
                                        {6589,{4587,1232,8520,9856}},
                                        {1587,{1232}}
                                        };

//Set number of max courses a student can register for.
int numMaxCourses = 4;

//Build an array of avaialble courses to register.
struct course courses[10] = {{4587,4,"MAT 236"},
                            {4599,3,"COP 220"},
                            {8997,1,"GOL 124"},
                            {9696,3,"COP 100"},
                            {1232,5,"MAC 531"},
                            {9856,2,"STA 100"},
                            {8520,5,"TNV 400"},
                            {8977,1,"CMP 100"}};
int maxAvailableCourses=10;
//courses[0].crn=4587;
//courses[0].creditHours=4;
//courses[0].courseName="MAT 236";

// Driver program
int main() {



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
  system("clear");
  printf("Welcome to VALENCE COMMUNITY COLLEGE Student Managment System\n");
  while(selection != 0) {

    printf("Choose from the following options:\n 1- Add a new student\n 2- Add/Delete a course\n 3- Search for a student\n 4- Print fee invoice \n 5- Print Students \n 6- Print Registered Courses \n 0- Exit Program");
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
    else if (selection==2){
        //Call and add function to print students current courses
        //CourseNumber, Prefix, Credit Hours

        //Add options to get for adding, deleting or canceling adding course options
        //Use a switch/case for gathering option chosen

        //addCourse(studentRecords,studentCourse);
        printLine();
        printf("Available Courses to choose from:\n");
        printLine();
        printAvailableCourses();
        printf("Enter the student's id:");
        scanf("%d", &studentId);
        addCourse(studentId);
    }
    else if (selection==3){
        printf("Enter the student's id:");
        //scanf("%d", &studentRecords[recordId].studentId);
        scanf("%d", &studentId);
        searchStudent(studentId);
    }
    else if (selection==4){
        printf("Enter the student's id:");
        //scanf("%d", &studentRecords[recordId].studentId);
        scanf("%d", &studentId);
        printRegisteredCourses(studentId);
    }
    else if (selection==5){
        printStudents();
        printLine();
    }
    else if (selection==6){
        printf("Enter the student's id:");
        //scanf("%d", &studentRecords[recordId].studentId);
        scanf("%d", &studentId);
        printRegisteredCourses(studentId);
    }
  }
 //  exit;

  return 0;
}

void addStudent(int studentId, char* firstName, char* lastName) {
    //studentRecords[recordId].firstName=(char*)malloc(sizeof(char*));
    //studentRecords[recordId].lastName=(char*)malloc(sizeof(char*));
    studentRecords[studentRecordStartIndex].studentId=studentId;
    studentRecords[studentRecordStartIndex].firstName=firstName;
    studentRecords[studentRecordStartIndex].lastName=lastName;
    studentRecordStartIndex++;
    //printf("Student %s %s added\n",firstName, lastName);
    //printLine();
    printf("Adding record");
    for(int i=1;i<2000;i=i+100) {
        printf(".");
    }
    printf("Student %s %s added\n",firstName, lastName);
    delay(2000);
    //delay(3000);
    system("clear");
    return;
}

void addCourse(int studentId) {
    int numCourses=0;
    int tempCourseNum;
    char tempCourseSelection[numMaxCourses];

/*
Logic required for addCourse
1. Capture number of courses plan on taking
    1a)Validate if number is less or equal to 4
    1b)If yess then proceed to add course
2. Validate that course being added is a valid course
    2a) Use validate function to query course array.  If course # exists then proceed.  Function will return true or false boolean value.
    2b) If course isn't valid then prompt user that course is incorrect and request to enter course # again.  Need to decide what type of decision flow operator to use (i.e. While loop, etc.)
3. Add course to studentCourse array.  Must check if user has reached max of four courses registered.
    3a)Check if max course of 4 per student has been reached. If not then proceed to add.
    3b)If max courses registration is reached then return to main menu using return command at end of function.


*/
        printf("\nEnter how many courses [STUDENT_NAME] is taking (up to 4 courses)?");
            scanf("%d", &numCourses);
        if(numCourses <= numMaxCourses) {
            for(int i=0; i<numCourses;i++)
                printf("\nEnter the %d course number: ",i+1);
                //scanf("%d", tempCourseSelection[i]);
                //while(validateCourse(tempCourseSelection[i])

                //Add course to studentCourses array
        }

    //Search for studentid in studentList
    //Add course to student's records
    return;

}

course* getCourseInfo(int crn) {
    int numRecords = maxAvailableCourses;
    int indexOfCourse = 0;
    course tempCourses[4];
    //Do a for loop to query the courses
     for(int i=0; i < numRecords ; i++) {
         if(crn == courses[i].crn){
            tempCourses[indexOfCourse]=courses[i];
            indexOfCourse++;
         }
     }
    return tempCourses;
}
bool validateCourse(int courseNum) {
    //Check if course number is valid
    printf("Size of courses array %lu\n",sizeof(courses));
    printf("Size of courses crn %lu\n",sizeof(courses->crn));
    // for(int i=0; i<sizeof(studentCourses); i++) {
    //     for(int j=0; j<sizeof(studentCourses[i].coursesId))
    //     if(courseNum == studentCourses[i].coursesId) {
    //         printf("Found matching record\n");
    //         return true;
    //     }
    //     else {
    //      printf("No matching record\n");
    //        return false;
    //     }
    //remove later
    return false;
    //}
}

void printRegisteredCourses(int studentId){
     int numRecords = sizeofArray;
     float tempTotal = 0;
     int tempCreditHours =0;
     int tempCoursesFound =0;
    //printf("CRN\tCourse Name\tCredit Hours\n");
        system("clear");
        printHeader();
        printf("Fee Invoice Prepared for Student:\n");
        //Need to call getStudent Info to retrieve full name
        printf("%i\n\n",studentId);
        printf("1 Credit Hour = $120.25\n\n");
        printf("CRN\tCR_PREFIX\tCR_HOURS\n");
    for(int i=0; i < numRecords ; i++) {
        //printf("Student Id %i\n",studentCourses[i].studentId);
        //If matches student id then go through the registered courses
        
        if(studentCourses[i].studentId == studentId) {
            for(int j=0; j<maxNumberofCourses; j++) {
        //}
            
            if(studentCourses[i].coursesId[j] != NULL) {
                //printf("Student RegisteredCourse %i\n",studentCourses[i].coursesId[j]);
                tempCreditHours = getCourseInfo(studentCourses[i].coursesId[j])->creditHours;
                printf("%i\t",getCourseInfo(studentCourses[i].coursesId[j])->crn);
                printf("%s\t\t",getCourseInfo(studentCourses[i].coursesId[j])->courseName);
                printf("%i\t",tempCreditHours);
                printf("$ %.2f\t",tempCreditHours * costPerCreditHour);
                printf("\n");
                tempTotal=tempTotal + (tempCreditHours * costPerCreditHour);
                tempCoursesFound++;
            }
        }
            printf("tempCoursesValue: %i%",tempCoursesFound);
            printf("\n\t\t\t\tHealth & id fees $ %.2f",studentFees);
            printf("\n\n");
            printLine();
            printf("\t\t\t\tTotal Payments %.2f", tempTotal);
            printf("\n\n");
    }
        //if(courses[i].courseName != NULL)
        //printf("%d\t %s\t %d\n",courses[i].crn,courses[i].courseName,courses[i].creditHours);
        }
        return;
}


void printStudents() {
    int numRecords = sizeof(studentRecords)/sizeof(studentRecords[0]);
    //printf("Number of Records to Search: %d\n",numRecords);
    //Need a for loop to iterate array
    if(numRecords == 0) {
        printf("No Records\n");
    }
    else{
        printLine();
        printf("Students List:\n");
        printf("ID\t Full Name\n");
        for(int i=0; i < numRecords ; i++) {
            if (studentRecords[i].studentId != NULL)
            printf("%d\t %s %s\n",studentRecords[i].studentId,studentRecords[i].firstName,studentRecords[i].lastName);
    }
    }

    return;
}

void printStudent(int studentId){
    printf("Students List:\n");
    printf("ID\t Full Name\n");
    printf("%d\t %s %s\n",studentRecords[studentId].studentId,studentRecords[studentId].firstName,studentRecords[studentId].lastName);
}

bool searchStudent(int studentId) {
    return true;
}

void printAvailableCourses(){
    int numRecords = sizeof(courses)/sizeof(courses[0]);
    printf("CRN\tCourse Name\tCredit Hours\n");
    for(int i=0; i < numRecords ; i++) {
        if(courses[i].courseName != NULL)
        printf("%d\t %s\t %d\n",courses[i].crn,courses[i].courseName,courses[i].creditHours);
    }
    return;
}

void printInvoice(int studentId) {
    printf("Invoice Printing function still pending\n");
    printLine();
}

void printLine(){
    printf("\n-----------------------------------------------------------------------------\n");
    return;
}

void printHeader(){
    //system("clear");
    printf("VALENCE COMMUNITY COLLEGE\n");
    printf("ORLANDO FL 10101\n");
    printLine();
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
