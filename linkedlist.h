#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER

typedef struct node Node;

typedef struct list List;

typedef struct studentInfo StudentInfo;

List * makelist();
void add(StudentInfo studentInfo, List * list);
void delete(StudentInfo studentInfo, List * list);
void display(List * list);
void reverse(List * list);
void reverse_using_two_pointers(List * list);
void destroy(List * list);
int search(int studentId, List * List);

#endif
