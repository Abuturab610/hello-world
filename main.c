/**
 * @file main.c
 * @author Syed Rizvi
 * @date April 12th, 2022.
 * @brief Functions within Course Library
 */

#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "time.h"
#include "course.h"

/**
 * Displays the works of the following functions and interactions between students and courses
the given example is students within a math course
 * Enrolls students, prints course info, creates students, finds highest score, and amount of passing students
 * @return Program status 0
 */
int main()
{
  srand((unsigned) time(NULL));

  Course *MATH101 = calloc(1, sizeof(Course));
  strcpy(MATH101->name, "Basics of Mathematics");
  strcpy(MATH101->code, "MATH 101");
  
  //create 20 students for this math class
  for (int i = 0; i < 20; i++) 
    enroll_student(MATH101, generate_random_student(8));
  
  print_course(MATH101);

  Student *student;
  student = top_student(MATH101);
  printf("\n\nTop student: \n\n");
  print_student(student);

  int total_passing;
  Student *passing_students = passing(MATH101, &total_passing);
  printf("\nTotal passing: %d\n", total_passing);
  printf("\nPassing students:\n\n");
  for (int i = 0; i < total_passing; i++) print_student(&passing_students[i]);
  
  return 0;
}