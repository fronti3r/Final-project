#include <stdio.h>

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

struct student studentRecords[10] = {{1254,"Zayd","Ali"},
        {6589,"Nimra","Bilal",},
        {1587,"Peta", "Chelsea"},
        {6089,"Rachel","Cones"},
        {7136,"Cory","Becka"}
        };
int studentRecordStartIndex=5;
int maxNumberofCourses = 4;
//student* studentRecords = malloc(numMaxStuden

//Build an array of students registered for courses and fill in with initial values.
struct studentCourse studentCourses[10] = {
                                        {1234,{4587,4599,8997}},
                                        {6589,{4587,1232,8520,9856}},
                                        {1587,{1232}}
                                        };
int sizeofArray = 3;
void printRegisteredCourses();
course* getCourseInfo(int crn);

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
    printf("%s\n",getCourseInfo(4587)->courseName);
    printf("%i\n",getCourseInfo(4587)->creditHours);
    printf("%i\n",getCourseInfo(4587)->crn);

   return 0;
}

void printRegisteredCourses(){
    int numRecords = sizeofArray;
    //printf("CRN\tCourse Name\tCredit Hours\n");
    for(int i=0; i < numRecords ; i++) {
        printf("Student Id %i\n",studentCourses[i].studentId);
        for(int j=0; j<maxNumberofCourses; j++) {
        //}
        if(studentCourses[i].coursesId[j] != 0)
        printf("Student RegisteredCourse %i\n",studentCourses[i].coursesId[j]);
        //if(courses[i].courseName != NULL)
        //printf("%d\t %s\t %d\n",courses[i].crn,courses[i].courseName,courses[i].creditHours);
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