#ifndef CLASS_MARKS_H
#define CLASS_MARKS_H

void generate_random_marks(float class_marks[], int num_students);
int find_third_best_student(float class_marks[], int num_students);
int find_class_with_higher_avg(float class1_marks[], float class2_marks[], int num_students, int third_best_student);

#endif