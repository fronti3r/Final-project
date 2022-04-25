#Fee Invoice App

#functions
#addStudent()
#addCourse()
#deleteCourse()
printInvoice()

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
  

 
