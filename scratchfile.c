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
    int studenId;
    course coursesId[4];
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

struct student studentRecords[10] = {{1254,"Zayd","Ali"},
        {6589,"Nimra","Bilal",},
        {1587,"Peta", "Chelsea"},
        {6089,"Rachel","Cones"},
        {7136,"Cory","Becka"}
        };
int studentRecordStartIndex=5;
//student* studentRecords = malloc(numMaxStuden

int main() {
   // printf() displays the string inside quotation
   printf("Size of studentCourses array %lu",sizeof(studentCourses)/sizeof(studentCourses[0]));
   printf("Size of studentRecords array %lu",sizeof(studentRecords)/sizeof(studentRecords[0]));
   return 0;
}