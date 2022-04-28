#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

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
int maxAvailableCourses=10;

struct student studentRecords[10] = {{1234,"Zayd","Ali"},
        {6589,"Nimra","Bilal",},
        {1587,"Peta", "Chelsea"},
        {6089,"Rachel","Cones"},
        {7136,"Cory","Becka"}
        };
int studentRecordStartIndex=5;
int maxNumberofCourses = 4;
float costPerCreditHour = 120.25;
float studentFees = 35.00;
//student* studentRecords = malloc(numMaxStuden

//Build an array of students registered for courses and fill in with initial values.
struct studentCourse studentCourses[] = {
                                        {1234,{4587,4599,8997}},
                                        {6589,{4587,1232,8520,9856}},
                                        {1587,{1232}}
                                        };
int studentCourseStartIndex = 3;
void printRegisteredCourses();
student searchStudent(int studentId);
course* getCourseInfo(int crn);
bool checkStudentRegistration(int studentId);
void menuAddCourse(student studentVar);
bool validateCourse(int courseId);
void addCourse(int studentId, int courseId);
void printRegistrationInfo();
void printHeader();
void printLine();

int main() {
   // printf() displays the string inside quotation
//    printf("Size of studentCourses array %lu",sizeof(studentCourses)/sizeof(studentCourses[0]));
//    printf("Size of studentRecords array %lu",sizeof(studentRecords)/sizeof(studentRecords[0]));
 //   int sizeofArray = sizeof studentCourses / sizeof *studentCourses;
    //printf("Size of studentRecords array %lu",sizeofArray);
    //studentCourses[sizeofArray+1]={9234,{4587,4599,8997}};
    //printf("Student Id %i\n",studentCourses[0].studentId);
    //printf("Student RegisteredCourse %i\n",studentCourses[0].coursesId[0]);
    //printf("Student RegisteredCourse %i\n",studentCourses[0].coursesId[2]);
    //printRegisteredCourses();
    // printf("%s\n",getCourseInfo(4587)->courseName);
    // printf("%i\n",getCourseInfo(4587)->creditHours);
    // printf("%i\n",getCourseInfo(4587)->crn);
   
    //printf("Array info %i",sizeof(searchStudent(1)->studentId)
    // bool studentExists;
    // int studentId = 1;
    // student tempStudent = searchStudent(studentId);

    // if (tempStudent.studentId == 0) {
    //             printf("Search Results: %d\n",tempStudent.studentId);
    //             printf("\n\nStudent with ID %d doesn't exists",studentId);
    //             studentExists = true;
    //         }
    // else {
    //     printf("StudentSearch Result: %d\n",tempStudent.studentId);
    //     studentExists=false;
    // }
    //printf("Registration Status: %d\n",checkStudentRegistration(123));
    // student tempStudent = {100,"Will","Perez"};
    // menuAddCourse(tempStudent);
    //printf("Size of studentCourses array: %lu",sizeof(studentCourses->coursesId)/sizeof(studentCourses->coursesId[0]));
    // {1234,{4587,4599,8997}},
    // {6589,{4587,1232,8520,9856}},
    // {1587,{1232}}
    //addCourse(15871, 8520);
    //  if(checkStudentRegistration(15871))
    //      printf("Student registered\n");
    //  else
    //     printf("Student not registered\n");

    printRegistrationInfo();
   return 0;
}

// void printRegisteredCourses(){
//     int numRecords = sizeof(studentCourses)/sizeof(studentCourses[0]);
//     //printf("CRN\tCourse Name\tCredit Hours\n");
//     for(int i=0; i < numRecords ; i++) {
//         printf("Student Id %i\n",studentCourses[i].studentId);
//         for(int j=0; j<maxNumberofCourses; j++) {
//         //}
//         if(studentCourses[i].coursesId[j] != 0)
//         printf("Student RegisteredCourse %i\n",studentCourses[i].coursesId[j]);
//         //if(courses[i].courseName != NULL)
//         //printf("%d\t %s\t %d\n",courses[i].crn,courses[i].courseName,courses[i].creditHours);
//         }
//     }
//     return;
// }

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

student searchStudent(int studentId) {
    int numRecords = studentRecordStartIndex;
    student tempStudent;
    tempStudent.studentId = NULL;
    //printf("Entering searchStudent function\n\n");
    for(int i=0; i < numRecords ; i++) {
        //printf("%d\n",studentRecords[i].studentId);
            if (studentRecords[i].studentId == studentId) {
                tempStudent = studentRecords[i];
            }
    }
    return tempStudent;
}


void menuAddCourse (student studentVar) {
    int courseId=0;
    char selection='d';
    while(selection != 'C') {
    printf("\n\n\nChoose from:\n A - Add a new course for [%s %s]\n B- Delete a course for [%s %s]'s schedule\n C- Cancel Operations\n",studentVar.firstName,studentVar.lastName,studentVar.firstName,studentVar.lastName);
    printf("\nEnter your selection: ");
        scanf("%c", &selection);
        selection = toupper(selection);
    //printf("Enter the Student's ID:");
    //     scanf("%d", &id);
    if (selection =='A')
        printf("Enter course Number to add:");
            scanf("%d", &courseId);
        validateCourse(courseId);
        addCourse(studentVar.studentId,courseId);
    if (selection=='C'){
        return;
    }
    }
    return;
}


bool validateCourse(int courseId) {
    return true;

}

bool checkStudentRegistration(int studentId) {
    int indexOfCourse = 0;
    bool registeredStatus = false;
    //Do a for loop to query the courses
     for(int i=0; i < sizeof(studentCourses)/sizeof(studentCourses[0]) ; i++) {
         if(studentCourses[i].studentId == studentId){
            registeredStatus = true;
            indexOfCourse++;
         }
     }
    return registeredStatus;
}
void addCourse(int studentId, int courseId) {
    //Issue - How do I add to studentCourse structure without knowing the index to update.  
    //The course structure should follow this logic add
    // 1. Check if student already registered in courseid
    // 2. If not then proceed to add
    // 2a. 
    //studentCourses->coursesId[1]
    // struct studentCourse studentCourses[10] = {
    //                                     {1234,{4587,4599,8997}},
    //                                     {6589,{4587,1232,8520,9856}},
    //                                     {1587,{1232}}
    //                                     };
    // studentCourseStartIndex++;
    // //studentCourses[studentCourseStartIndex] = {}
    // if(studentCourses[i].coursesId[j] != NULL) {
    //                     //printf("Student RegisteredCourse %i\n",studentCourses[i].coursesId[j]);
    //                     tempCreditHours = getCourseInfo(studentCourses[i].coursesId[j])->creditHours;
    //                     printf("%i\t",getCourseInfo(studentCourses[i].coursesId[j])->crn);
    //                     printf("%s\t\t",getCourseInfo(studentCourses[i].coursesId[j])->courseName);
    //                     printf("%i\t",tempCreditHours);
    //                     printf("$ %.2f\t",tempCreditHours * costPerCreditHour);
    //                     printf("\n");
    //                     tempTotal=tempTotal + (tempCreditHours * costPerCreditHour);
    //                     tempCoursesFound++;
    //                 }
    int availCourseCount=4;
    int nextIndex = sizeof(studentCourses->coursesId)/sizeof(studentCourses->coursesId[0])+1;
        if(!checkStudentRegistration(studentId)) {
            printf("index value: %d\n",nextIndex);
            studentCourses[nextIndex].studentId=studentId;
            studentCourses[nextIndex].coursesId[0]=courseId;
            //printRegisteredCourses(studentId);
            printRegistrationInfo();
            exit;
        }
        else {
        //if(studentCourses[i].studentId == studentId) {
            for(int i=0; i < sizeof(studentCourses)/sizeof(studentCourses[0]); i++){
                    //printf("{{%i},",studentCourses[i].studentId);
                if(studentCourses[i].studentId == studentId) {
                        //If studentid matches then iterate courses registered looking for non matches.  
                        for(int j=0; j<sizeof(studentCourses->coursesId)/sizeof(studentCourses->coursesId[0]); j++){
                            //printf("j:%i ",j); 
                            //printf("{%i}",studentCourses->coursesId[j]);
                            if(studentCourses->coursesId[j] != 0) {
                                availCourseCount--;
                                printf("%i ",studentCourses->coursesId[j]);
                            }
                        }
                        
                }
                else
                printf("Student record not found in row\n");                    //availCourseCount=4;
            }
            if(availCourseCount>0) {
                studentCourses->coursesId[(4-availCourseCount)]=courseId;
                //printRegisteredCourses(studentId);
            }
            //printf("\nAvailable course count: %d\n",availCourseCount);
        else
        printf("Student not registered in classes %d\n",courseId);
        }
    
     return;
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
     }
     else {
        printf("Student with ID %d doesn't exists, try again.\n",studentId);
    }
        return;
}

void printRegistrationInfo() {
        // struct studentCourse studentCourses[10] = {
    //                                     {1234,{4587,4599,8997}},
    //                                     {6589,{4587,1232,8520,9856}},
    //                                     {1587,{1232}}
    //                                     };
    printf("coursessize: %lu\n", sizeof(studentCourses->coursesId)/sizeof(studentCourses->coursesId[0]));
    for(int i=0; i < sizeof(studentCourses)/sizeof(studentCourses[0]); i++) {
         printf("%i:",studentCourses[i].studentId);
         for(int j=0; j<sizeof(studentCourses->coursesId)/sizeof(studentCourses->coursesId[0]); j++) {
             printf("%i,",studentCourses[i].coursesId[j]);
             //printf("\n");
         }
         printf("\n");
    //         //if(studentCourses->coursesId[j] != 0)
    //         //if(j % 3)    
     }
        // printf("%i:",studentCourses[0].studentId);
        // printf("%i:",studentCourses[0].coursesId[0]);
        // printf("%i:",studentCourses[0].coursesId[1]);
        // printf("%i:",studentCourses[0].coursesId[2]);
        // printf("%i:",studentCourses[0].coursesId[3]);
    return;
}
void printHeader(){
    //system("clear");
    printf("VALENCE COMMUNITY COLLEGE\n");
    printf("ORLANDO FL 10101\n");
    printLine();
}

void printLine(){
    printf("\n-----------------------------------------------------------------------------\n");
    return;
}