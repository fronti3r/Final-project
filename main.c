// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
  int data;
  struct Node* next;
};

// Insert at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
  // Allocate memory to a node
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  // insert the data
  new_node->data = new_data;

  new_node->next = (*head_ref);

  // Move head to new node
  (*head_ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

// Insert the the end
void insertAtEnd(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref; /* used in step 5*/

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

// Delete a node
void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

// Search a node
int searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}

// Sort the linked list
void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    // index points to the node next to current
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}

// Print the linked list
void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}

// Driver program
int main() {
  struct Node* head = NULL;
        int selection,id,*num,*num1;
        char name1[10], name2[10], choice;
num = malloc(sizeof(int));
num1 = malloc(sizeof(int));

      printf("Welcome!\nChoose from the following options:\n 1- Add a new student\n 2- Add/Delete a new course\n 3- Search for a student\n 4- Print a fee invoice \n 0- Exit Program");
    printf("\nEnter your selection:");
    scanf("%d", &selection);
    printf("Enter the Student's ID:");
    scanf("%d", &id);
        if (selection==1){
           printf("Enter the student's name:");
        scanf("%s %s", name1, name2);
        printf("Enter how many courses [%s %s] is taking (up to 4 courses)?\n", name1,name2);
        scanf("%d", num);
        printf("Enter the %d scores here:", *num);
        scanf("%d", num1);
        printf("Student added successfully!");
        insertAtBeginning(&head, id);
//         insertAtBeginning(&head, 2);
                }
        else if (selection ==3) {
//  insertAtEnd(&head, 1);
//  insertAtEnd(&head, 4);
//  insertAfter(head->next, 5);
  int item_to_find = id;
  if (searchNode(&head, id)) {
  printf("\n%d is found", item_to_find);
  } else {
  printf("\n%d is not found\n", item_to_find);
  }
printf("Here are the courses [ ] is taking:\n", name1,name2);
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
}
