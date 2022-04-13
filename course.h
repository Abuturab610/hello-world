/**
*
* @file course.h
* @author Syed Rizvi
* @date April 12th, 2022.
* @brief Functions within Course Library
*
*/

#include "student.h"
#include <stdbool.h>

/**
* course struct
*/ 
typedef struct _course 
{
  char name[100];
  char code[10];
  Student *students; /**< pointer to student */
  int total_students; /**< number of all students */
} Course;

void enroll_student(Course *course, Student *student);
void print_course(Course *course);
Student *top_student(Course* course);
Student *passing(Course* course, int *total_passing);


