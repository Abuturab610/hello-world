/**
*
* @file student.h
* @author Syed Rizvi
* @date April April 12th, 2022.
* @brief Functions within Course Library
*
*/

/**
Struct to show a student
*/ 
typedef struct _student 
{ 
  char first_name[50];
  char last_name[50];
  char id[11];
  double *grades; /**< pointer to students grade */
  int num_grades; /**< pointer to number of students grades */
} Student;

void add_grade(Student *student, double grade);
double average(Student *student);
void print_student(Student *student);
Student* generate_random_student(int grades); 
