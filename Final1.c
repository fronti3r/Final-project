#include<stdio.h>

#define maxStds 100

 typedef struct
 {
     int id;
     char name[50];
     int crns[4];
 } classmate;

typedef struct student{
    int studentId;
    char* firstName;
    char* lastName;
    int *courseId;
}student;

typedef struct studentRecord{
    student studentList[10];
    //course* studentCourse;
}studentRecord;

int tempStudentId=0;
int numMaxStudents = 10;
void addStudent(int studentId,char* name1,char* name2,int* num1);

//Functions for application
void printStudents(student *studentList, int numRecords);
void printInvoice(student *studentList);
//------------------------------------------
typedef struct Node
{
   int id;
    char name[50];
    int crns[4];
}Node;
//______________________
//void printAll (student *);
void printCrns ( int *);
int searchById (int id);;
//______________________
struct student studentRecords[10];
int main()
{
//student* studentRecords = malloc(numMaxStudents * sizeof *studentRecords);


int recordId=0;

    classmate A[maxStds] = { {1254,"Zayd Ali", {9696}},
    {6589,"Nimra Bilal", {4587,9696}},
    {1587,"Peta Chelsea"},
    {6089,"Rachel Cones", {8974,6985,2359,70052}},
    {7136,"Cory Becka", {5623,9696,58736}}
    };
    int id,selection;
    int index;
    char name[50];

//printAll(A);

    printf("\n________________________\n");
  do{
        printf("Welcome!\nChoose from the following options:\n 1- Add a new student\n 2- Add/Delete a new course\n 3- Search for a student\n 4- Print a fee invoice \n 0- Exit Program");
    printf("\nEnter your selection:");
    scanf("%d", &selection);
if (selection==1){
   //studentRecords[recordId].firstName=(char*)malloc(sizeof(char*));
   //      studentRecords[recordId].lastName=(char*)malloc(sizeof(char*));

         printf("Enter the student's id:");
         scanf("%d", &studentRecords[recordId].studentId);
         printf("Enter the student's first name:");
         scanf("%s", &studentRecords[recordId].firstName);
         printf("Enter the student's last name:");
         scanf("%s", &studentRecords[recordId].lastName);
         //printf("Enter how many courses [%s %s] is taking (up to 4 courses)?\n", name1,name2);
         //  scanf("%d", num);
         printf("Enter the courseID here:");
             scanf("%d", &studentRecords[recordId].courseId);

         recordId++;
        }
        else if (selection==3){

    printf ("Enter the student's id: ");
    scanf("%d", &id);

    //index = searchById (A, id);
    index = searchById(id);


    if (index == -1 ) printf ("%d NOT found\n", id);
    else
    {
    printf ("Student found...\n");
    printf("[id: %d] <-->[Name: %s]\n", id, studentRecords[id].firstName);
    //printCrns (A[index].crns);
    }
    printf("\n________________________\n");
         }
else if (selection ==4){
    printStudents(studentRecords,recordId);
}
          }while(selection!=0);
        printf("Goodbye!");
    return 0;
}

void printCrns ( int * crnArray)
{
    for (int j =0; j<4; j++)
    {
        if (crnArray[j] != 0)
        printf("[%d] ", crnArray[j]);
    }

}
//______________________
//void printAll (student * array)
//{
//    int i;
//    for ( i= 0;i<maxStds;i++) {
//        if ( array[i].id !=0 )
//        {
//            printf("\n\t\t%d\t%s\t\t", array[i].id , array[i].name);
//            printCrns(array[i].crns);
//            printf("\n");
//        }
//    }
//
//}
int searchById (int id)
{
    for(int i=0;i<maxStds;i++)
    {
        printf("Search records %d",studentRecords[i].studentId);
        if(studentRecords[i].studentId==id)
        //studentRecord->studentList->courseId
        return i;
    }
    return -1;
}
void printStudents(student *studentList,int numRecords) {

    //Need a for loop to iterate array
    if(numRecords == 0)
        printf("No Records\n");
    else
    for(int i=0; i < numRecords ; i++) {
        printf("Student List\n");
        printf("%s %s\n",&studentList[i].firstName,&studentList[i].lastName);
    }

    return;
}
