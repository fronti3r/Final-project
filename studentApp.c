// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

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
student tempStudent;
//void addStudent(int studentId,char* name1,char* name2,int* num1);

//Functions for application
void addStudent(int studentId, char* firstName, char*LastName);
void printStudents();
void printStudent(student studentVar);
student searchStudent(int studentId);

void addCourse(int studentId, int courseId);
void menuAddCourse (student studentVar);
course* getCourseInfo(int crn);
bool checkStudentRegistration(int studentId);
void printRegisteredCourses(int studentId);
bool validateCourse(int courseNum);
int sizeOfStudentCourses();
int sizeOfStudentRecords();
void printStudentCourses();

void printStudentInvoice(int studentId);
void printInvoice(int studentId);
void printAvailableCourses();
void printLine();
void printHeader();
void delay(int milliseconds);
void displayMainMenu();

//Build an array of student records and fill in initial values.
struct student studentRecords[10] = {{1254,"Zayd","Ali"},
                                    {6589,"Nimra","Bilal",},
                                    {1587,"Peta", "Chelsea"},
                                    {6089,"Rachel","Cones"},
                                    {7136,"Cory","Becka"}
                                    };

//student* studentRecords = malloc(numMaxStudents * sizeof *studentRecords);

//Build an array of students registered for courses and fill in with initial values.
struct studentCourse studentCourses[10] = {
                                        {1254,{4587,4599,8997}},
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
    //student tempStudent = {100,"Will","Perez"};
    //printRegisteredCourses(1254);
    //menuAddCourse(tempStudent);
    displayMainMenu();
return 0;
}

void displayMainMenu() {
    char *firstName, *lastName;
    int studentId = 0;
    int selection=-1;
    system("clear");
    printf("Welcome to VALENCE COMMUNITY COLLEGE Student Managment System\n");
    while(selection != 0) {
        printLine();
        printf("\n\n\nChoose from the following options:\n");
        printf("1- Add a new student\n");
        printf("2- Add/Delete a course\n");
        printf("3- Search for a student\n");
        printf("4- Print fee invoice \n");
        printf("5- Print students \n");
        printf("6- Print a student's registered courses\n");
        printf("7- Print all students registered courses\n");
        printf("0- Exit Program\n");

        printf("\nEnter your selection:");
            scanf(" %d", &selection);
        //printf("Enter the Student's ID:");
        //     scanf("%d", &id);
        
        //Add new student
        if (selection==1){

                printf("Enter the student's id:");
                //scanf("%d", &studentRecords[recordId].studentId);
                scanf("%d", &studentId);
                tempStudent = searchStudent(studentId);
                if (tempStudent.studentId != 0){
                    printf("Search Results: %d\n",tempStudent.studentId);
                    printf("\n\nStudent with ID %d already exists\n\n",studentId);
                }
                else {
                    printf("Enter the student's first name:");
                    //scanf("%s", studentRecords[recordId].firstName);
                    scanf("%s", firstName=(char*)malloc(sizeof(char*)));
                    printf("Enter the student's last name:");
                    scanf("%s", lastName=(char*)malloc(sizeof(char*)));
                    addStudent(studentId,firstName,lastName);
                }
            //}
                
                //recordId++;
        }

        //Add or delete a course
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
            //scanf("%d", &studentRecords[recordId].studentId);
            scanf("%d", &studentId);
            tempStudent = searchStudent(studentId);
                if (tempStudent.studentId != 0){
                    menuAddCourse(tempStudent);
                    //if(checkStudentRegistration(tempStudent.studentId)
                    printRegisteredCourses(studentId);
                    //else
                    //    printf("Student isn't registered for any courses.\n");
                }
                else {
                    printf("\n\nStudent with ID %d doesn't exists",studentId);
                }
            
        }
        //Search for a student
        else if (selection==3){
            printf("Enter the student's id:");
                //scanf("%d", &studentRecords[recordId].studentId);
                scanf("%d", &studentId);
                tempStudent = searchStudent(studentId);
                if (tempStudent.studentId != 0){
                    printStudent(tempStudent);
                }
                else {
                    printf("\n\nStudent with ID %d doesn't exists",studentId);
                }

        }
        //print fee invoice
        else if (selection==4){
            printf("Enter the student's id:");
            //scanf("%d", &studentRecords[recordId].studentId);
            scanf("%d", &studentId);
            printStudentInvoice(studentId);
            //break;
        }
        //Print students
        else if (selection==5){
            printStudents();
            //printLine();
        }
    //Print a students registered courses
        else if (selection==6){
            printf("Enter the student's id:");
            //scanf("%d", &studentRecords[recordId].studentId);
            scanf("%d", &studentId);
            if(checkStudentRegistration(studentId))
                printRegisteredCourses(studentId);
            else
                printf("Student isn't registered for any courses.\n");
        }
        //Print registered courses all
        else if (selection==7)
        {
            printStudentCourses();
        }
        else if (selection==0){
            printf("Goodbye!\n");
            exit;
        }
        else {
            printf("Incorrect Selection, please try again!\n");
            selection = -1;
        }
    }
  return;
}
void addStudent(int studentId, char* firstName, char* lastName) {
    //studentRecords[recordId].firstName=(char*)malloc(sizeof(char*));
    //studentRecords[recordId].lastName=(char*)malloc(sizeof(char*));
    tempStudent = searchStudent(studentId);
    if (tempStudent.studentId == 0) {
        studentRecords[studentRecordStartIndex].studentId=studentId;
        studentRecords[studentRecordStartIndex].firstName=firstName;
        studentRecords[studentRecordStartIndex].lastName=lastName;
        studentRecordStartIndex++;
    }
    else {
        printf("\n\nStudent with ID %d already exists",studentId);
        return;
    }
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

void addCourse(int studentId, int courseId) {
    //Issue - How do I add to studentCourse structure without knowing the index to update.  
    //The course structure should follow this logic add
    // 1. Check if student already registered in courseid
    // 2. If not then proceed to add
    //                 }
    int availCourseCount=4;
    int nextIndex = sizeOfStudentCourses();
    //If student isn't registered for any courses, add immediately.
        if(!checkStudentRegistration(studentId)) {
            //printf("addCourse: nextIndex %d\n",nextIndex);
            studentCourses[nextIndex].studentId=studentId;
            studentCourses[nextIndex].coursesId[0]=courseId;
            //printRegisteredCourses(studentId);
            //printRegistrationInfo();
            printf("Student added to course %d\n",courseId);
            printRegisteredCourses(studentId);
            return;
        }
        //If student is registered then check for 
        else {
        //if(studentCourses[i].studentId == studentId) {
              for(int i=0; i < sizeof(studentCourses)/sizeof(studentCourses[0]); i++) {
                  if(studentCourses[i].studentId == studentId)
                //printf("%i:",studentCourses[i].studentId);
                for(int j=0; j<sizeof(studentCourses->coursesId)/sizeof(studentCourses->coursesId[0]); j++) {
                    //Find student and add course only if there's an empty spot.
                    if(studentCourses[i].coursesId[j]==0 && studentCourses[i].studentId==studentId) {
                        //printf("%i,",studentCourses[i].coursesId[j]);
                        studentCourses[i].coursesId[j]=courseId;
                        return;
                    }

             //printf("\n");
            }
            //printf("\n");
        }
        }
     return;
}

void menuAddCourse (student studentVar) {
    int courseId=0;
    char menu_option;
    
    while(1)
    {   
        printf("\n\n\nChoose from:\n A- Add a new course for [%s %s]\n B- Delete a course for [%s %s]'s schedule\n C- Cancel Operations\n",studentVar.firstName,studentVar.lastName,studentVar.firstName,studentVar.lastName);
        printf("\nEnter your selection: ");
        scanf(" %c", &menu_option);
        menu_option = toupper(menu_option);
        //printf("Enter the Student's ID:");
        //     scanf("%d", &id);
        fflush(stdin);
        switch(menu_option){

        case 'A':
            printf("Enter course Number to add:");
            scanf("%d", &courseId);
            if(validateCourse(courseId)) {
                addCourse(studentVar.studentId,courseId);
                break;
            }
            else {
              printf("Invalid course number %d, please try again\n",courseId);
              break;
            }
        case 'B':
            printf("case b");
            break;
        case'C':
            printf("case c");
            //difficulty = get_difficulty();
            return;
        default:
        //     printf("invalid input");
            break;
        }
    }
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

bool validateCourse(int courseId) {
    bool validCourse=false;
    for(int i=0; i<sizeof(courses)/sizeof(courses[0]);i++) {
        if(courses[i].crn==courseId)
            validCourse=true;
    }
    return validCourse;

}

void printRegisteredCourses(int studentId){
     student tempStudent;
     int numRecords = sizeof(studentCourses)/sizeof(studentCourses[0]);
     float tempTotal = 0;
     int tempCreditHours =0;
     int tempCoursesFound =0;
     int studentSearchResults;
     //student tempStudent;
     tempStudent = searchStudent(studentId);
     //printf("studentSearchResults %d\n",studentSearchResults);

     if (tempStudent.studentId!= 0) {
    //printf("CRN\tCourse Name\tCredit Hours\n");
            //system("clear");
            printHeader();
            printf("Student Course Registration:\n");
            //Need to call getStudent Info to retrieve full name
            printf("%i\n\n",studentId);
            //printf("1 Credit Hour = $120.25\n\n");
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
                        //printf("$ %.2f\t",tempCreditHours * costPerCreditHour);
                        printf("\n");
                        //tempTotal=tempTotal + (tempCreditHours * costPerCreditHour);
                        tempCoursesFound++;
                    }
                }
                    //printf("tempCoursesFound: %i%",tempCoursesFound);
                    // printf("\n\t\t\t\tHealth & id fees $ %.2f",studentFees);
                    // printf("\n\n");
                    // printLine();
                    // printf("\t\t\t\tTotal Payments %.2f", tempTotal);
                    // printf("\n\n");
            }
                //if(courses[i].courseName != NULL)
                //printf("%d\t %s\t %d\n",courses[i].crn,courses[i].courseName,courses[i].creditHours);
            }
     }
     else 
        printf("Student with ID %d doesn't exists, try again.\n",studentId);
    
    return;
}

void printStudentInvoice(int studentId){
     student tempStudent;
     int numRecords = sizeof(studentCourses)/sizeof(studentCourses[0]);
     float tempTotal = 0;
     int tempCreditHours =0;
     int tempCoursesFound =0;
     int studentSearchResults;
     //student tempStudent;
     tempStudent = searchStudent(studentId);
     //printf("studentSearchResults %d\n",studentSearchResults);

     if (tempStudent.studentId!= 0) {
    //printf("CRN\tCourse Name\tCredit Hours\n");
            //system("clear");
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
                    //printf("tempCoursesFound: %i%",tempCoursesFound);
                    printf("\n\t\t\t\tHealth & id fees $ %.2f",studentFees);
                    printf("\n\n");
                    printLine();
                    printf("\t\t\t\tTotal Payments %.2f", tempTotal);
                    printf("\n\n");
            }
                //if(courses[i].courseName != NULL)
                //printf("%d\t %s\t %d\n",courses[i].crn,courses[i].courseName,courses[i].creditHours);
            }
     }
     else 
        printf("Student with ID %d doesn't exists, try again.\n",studentId);
    
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
        //printLine();
        printf("Students List:\n");
        printf("ID\t Full Name\n");
        for(int i=0; i < numRecords ; i++) {
            if (studentRecords[i].studentId != NULL)
            printf("%d\t %s %s\n",studentRecords[i].studentId,studentRecords[i].firstName,studentRecords[i].lastName);
        }
    }

    return;
}

void printStudent(student studentVar){
    printf("ID\t Full Name\n");
    printf("Students List:\n");
    printf("%d\t %s %s\n",studentVar.studentId,studentVar.firstName,studentVar.lastName);
}

student searchStudent(int studentId) {
    student tempStudent;
    tempStudent.studentId = NULL;
    //printf("Entering searchStudent function\n\n");
    for(int i=0; i < sizeOfStudentRecords() ; i++) {
        //printf("%d\n",studentRecords[i].studentId);
            if (studentRecords[i].studentId == studentId) {
                tempStudent = studentRecords[i];
            }
    }
    return tempStudent;
}


bool checkStudentRegistration(int studentId) {
    int numRecords = sizeOfStudentCourses();
    int indexOfCourse = 0;
    bool registeredStatus = false;
    //Do a for loop to query the courses
     for(int i=0; i < numRecords ; i++) {
         if(studentId == studentCourses->studentId){
            registeredStatus = true;
            indexOfCourse++;
         }
     }
    return registeredStatus;
}
void printStudentCourses() {
    int numRecords = sizeof(studentCourses)/sizeof(studentCourses[0]);
        //printf("Number of Records to Search: %d\n",numRecords);
        //Need a for loop to iterate array
        if(numRecords == 0) {
            printf("No Records\n");
        }
        else{
            //printLine();
            printf("Students Courses List:\n");
            for(int i=0; i < numRecords ; i++) {
                if (studentCourses[i].studentId != NULL)
                printf("studentid:%d,courseids:%d,%d,%d,%d\n",studentCourses[i].studentId,studentCourses[i].coursesId[0],studentCourses[i].coursesId[1],studentCourses[i].coursesId[2],studentCourses[i].coursesId[3]);
            }
        }

    return;

}

int sizeOfStudentCourses() {
    int size=0;
    for(int i=0; i < sizeof(studentCourses)/sizeof(studentCourses[0]); i++) {
        if(studentCourses[i].studentId != 0)
            size++;
    }
    return size;
}

int sizeOfStudentRecords() {
    int size=0;
    for(int i=0; i < sizeof(studentRecords)/sizeof(studentRecords[0]); i++) {
        if(studentRecords[i].studentId != 0)
            size++;
        //printf("%i:\n",studentRecords[i].studentId);
    }
    return size;
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
