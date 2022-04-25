// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
//adding change

// typedef struct studentInfo{
//     int studentId;
//     char* firstName;
//     char* lastName;
//     int *courseId;
// }studentInfo;
// //Gen's linkedlist
// // Create a node
// struct Node {
//   studentInfo data;
//   struct Node* next;
// };

// // Insert at the beginning
// void insertAtBeginning(struct Node** head_ref, studentInfo new_data) {
//   // Allocate memory to a node
//   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

//   // insert the data
//   new_node->data = new_data;

//   new_node->next = (*head_ref);

//   // Move head to new node
//   (*head_ref) = new_node;
// }

// // Insert a node after a node
// void insertAfter(struct Node* prev_node, studentInfo new_data) {
//   if (prev_node == NULL) {
//   printf("the given previous node cannot be NULL");
//   return;
//   }

//   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//   new_node->data = new_data;
//   new_node->next = prev_node->next;
//   prev_node->next = new_node;
// }

// // // Insert the the end
// // void insertAtEnd(struct Node** head_ref, int new_data) {
// //   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
// //   struct Node* last = *head_ref; /* used in step 5*/

// //   new_node->data = new_data;
// //   new_node->next = NULL;

// //   if (*head_ref == NULL) {
// //   *head_ref = new_node;
// //   return;
// //   }

// //   while (last->next != NULL) last = last->next;

// //   last->next = new_node;
// //   return;
// // }

// // // Delete a node
// // void deleteNode(struct Node** head_ref, int key) {
// //   struct Node *temp = *head_ref, *prev;

// //   if (temp != NULL && temp->data == key) {
// //   *head_ref = temp->next;
// //   free(temp);
// //   return;
// //   }
// //   // Find the key to be deleted
// //   while (temp != NULL && temp->data != key) {
// //   prev = temp;
// //   temp = temp->next;
// //   }

// //   // If the key is not present
// //   if (temp == NULL) return;

// //   // Remove the node
// //   prev->next = temp->next;

// //   free(temp);
// // }

// // // Search a node
// // int searchNode(struct Node** head_ref, int key) {
// //   struct Node* current = *head_ref;

// //   while (current != NULL) {
// //   if (current->data == key) return 1;
// //   current = current->next;
// //   }
// //   return 0;
// // }

// // // Sort the linked list
// // void sortLinkedList(struct Node** head_ref) {
// //   struct Node *current = *head_ref, *index = NULL;
// //   int temp;

// //   if (head_ref == NULL) {
// //   return;
// //   } else {
// //   while (current != NULL) {
// //     // index points to the node next to current
// //     index = current->next;

// //     while (index != NULL) {
// //     if (current->data > index->data) {
// //       temp = current->data;
// //       current->data = index->data;
// //       index->data = temp;
// //     }
// //     index = index->next;
// //     }
// //     current = current->next;
// //   }
// //   }
// // }
// //End of Gen's linkedlist

// // Print the linked list
// void printList(struct Node* node) {
//   while (node != NULL) {
//   printf("%d ", node->data.studentId);
//   printf("%s ", node->data.firstName);
//   printf("%s ", node->data.lastName);
//   printf("%d\n", node->data.courseId[0]);
//   node = node->next;
//   }
// }
typedef struct student{
    int studentId;
    char* firstName;
    char* lastName;
    int *courseId;
}student;

int generateStudentId();
void addStudent(struct student *student);
//void addStudent(int studentId,char* name1,char* name2,int* num1);

// Driver program
int main() {

  //Create pointer for storing student structure
  struct student studentList[10];
  //int numMaxStudents = 2;
  //student * studentList = malloc(2 * sizeof(studentInfo));
  
  //struct Node* head = NULL;
  //Create storage for students
  //List * studentList = makelist();
  int selection,id,*num,*num1;
  selection=NULL;
  id=NULL;
  num=NULL;
  num1=NULL;
  char name1[10], name2[10], choice;
  //int courses[4];
  //num = malloc(sizeof(int));
  //num1 = malloc(sizeof(int));

  int studentId = 1;
  char* firstName = "John";
  char* lastName = "Doe";
  int courses[] = {20,30,40,50};
  //int *courseId = &courses; 

// typedef struct studentInfo{
//     int studentId;
//     char firstName[20];
//     char lastName[20];
//     int *courseId;
// }studentInfo;

  // student[0].studentId = studentId;
  // student[0].firstName = firstName;
  // student[0].lastName = lastName;
  // student[0].courseId = courseId;
  // student[1].studentId = 2;
  // student[1].firstName = "Jane";
  // student[1].lastName = "Austin";
  // student[1].courseId = courseId;

// void add(StudentInfo studentInfo, List * list);
// void delete(StudentInfo studentInfo, List * list);
// void display(List * list);
// void reverse(List * list);
// void reverse_using_two_pointers(List * list);
// void destroy(List * list);
//int search(StudentInfo studentInfo, List * List);
  
  
  // add(student[0], studentList);
  // add(student[1], studentList);
  // display(studentList);
  // if(search(1,studentList)==1)
  //   printf("Student found\n");
  // else
  //   printf("No Student Found!\n");


  //insertAtBeginning(&head, *student);
  //insertAfter(head->next, *student);
  //printList(student);

  printf("Welcome!\nChoose from the following options:\n 1- Add a new student\n 2- Add/Delete a new course\n 3- Search for a student\n 4- Print a fee invoice \n 0- Exit Program");
  printf("\nEnter your selection:");
    scanf("%d", &selection);
  //printf("Enter the Student's ID:");
//     scanf("%d", &id);
  if (selection==1){
    printf("Enter the student's first name:");
      scanf("%s", name1);
    printf("Enter the student's first name:");
      scanf("%s", name2);
    printf("Enter how many courses [%s %s] is taking (up to 4 courses)?\n", name1,name2);
      scanf("%d", num);
    printf("Enter the %d scores here:", *num);
      scanf("%d", num1);
      //   student->studentId = generateStudentId();
      //   student->firstName = name1;
      //   student->lastName = name2;
      //   student->courseId = num1;
      // addStudent(student);
      printf("Student added successfully!");
    }
 else if (selection == 0){
   exit;
 }
//         
        
//         //add(, id);
// //         insertAtBeginning(&head, 2);
//                 }
//         else if (selection ==3) {
// //  insertAtEnd(&head, 1);
// //  insertAtEnd(&head, 4);
// //  insertAfter(head->next, 5);
//         // int item_to_find = id;
//         // if (searchNode(&head, id)) {
//         //   printf("\n%d is found", item_to_find);
//         // } 
//         // else {
//         //   printf("\n%d is not found\n", item_to_find);
//         // }
//         // printf("Here are the courses [ ] is taking:\n", name1,name2);
//         }



  // add(1, studentInfo);
  // display(studentInfo);
  // delete(2, studentInfo);
  // display(studentInfot);
  // delete(1, studentInfo);
  // display(studentInfo);
  // delete(20, studentInfo);
  // display(studentInfo);
  // reverse(studentInfo);
  // //printf("Reversed: using three pointers. \n");
  // //display(list);
  // //reverse_using_two_pointers(list);
  // //printf("Reversed: using to pointers. \n");
  // //display(list);
  // destroy(list);
  //free(studentList);
  //free(student);

 

  return 0;
}

 void addStudent(struct student *student){
   studentList[0].studentId = studentId;
   studentList[0].firstName = name1;
   studentList[0].lastName = name2;
   studentList[0].courseId = num1;
}

int tempStudentId=0;
 int generateStudentId() {
   return tempStudentId++;
}



//                else if (selection == 2){
//  printf("\nHere are the courses [ ] is taking:\n ");
//  printf("Choose from:\nA- Add a new course for [ ]\nD- Delete a course from [ ]'s schedule\n C- Cancel operation");
//      scanf(" %c", choice);
//      switch (choice){
//  case 'A':
//  case 'D':
//  deleteNode(&head, id);
//  printList(head);
//  case 'C':
//    }
//
//
//                }

//
//
//  printf("Linked list: ");
//  printList(head);
//
//  printf("\nAfter deleting an element: ");
//  deleteNode(&head, id);
//  printList(head);
//
//
//  sortLinkedList(&head);
//  printf("\nSorted List: ");
//  printList(head);