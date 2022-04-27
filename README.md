# Fee Invoice App


## Unit Testing Requirements by Area
### Adding new student
- [ ] 1. There can't be a duplicate student ID
### Adding or Deleting a student from a course
Summary - When user selects to add/delete course the 1) program displays current course registered. The presents a second menu option to Add (A), Delete (D), or Cancel (C) operation.  After course is deleted provide another prompt if user wants to print new invoice.
- [ ] 1. Student can only take 4 courses at a time.
- [ ] 2. Validate on course entry request that student can only register to up to four courses.
- [ ] 3. Validate that course entered is valid
- [ ] 4. Ensure that for second menu option that both lower and upper case letters are accepted.
- [ ] 5. Create function that deletes a course from the studentCourses array.
- [ ] 5a. Display message that course was deleted.
- [ ] 6. Display invoice option should accept lower or upper case

*Enhancement - When adding a course first check how many courses already registered and then display up to how many the student can register for.*


# Functions for application
- void addStudent(int studentId, char* firstName, char*LastName);
- void printStudents();
- void printStudent(student studentVar);
- student searchStudent(int studentId);
- void printInvoice(int studentId);
- void addCourse(int studentId);
- course* getCourseInfo(int crn);
- bool checkStudentRegistration(int studentId);
- void printRegisteredCourses(int studentId);
- bool validateCourse(int courseNum);
- void printAvailableCourses();
- void printLine();
- void printHeader();
- void delay(int milliseconds);

structure

student
 - studentId
 - firstName
 - lastName
 
 course
 - crn
 - creditHours
 - courseName
 
 studentCourses
 - studentList (student type)
 - course (course type array)
 
 addStudent function should add to the student array (studentRecords)
 
 addCourse function should add to the course array(courses)
  - function should take crn, creditHours, and courseName as parameters
  - 
 
 displayStudent function should display firstName and lastName
 - function should take studentId as a parameter
 - First check if student exists, if yes return student's firstName and lastName
    else if no return "Student ID doesn't exist"
  


 
