#include <stdlib.h>
#include <time.h>
#include "class_marks.h"

void generate_random_marks(float class_marks[], int num_students) {
    int i;
    for (i = 0; i < num_students; i++) {
        srand(time(NULL));
        int random_number = rand();
        class_marks[i] = ((float)random_number / (float)(RAND_MAX)) * 10.0;
    }
}

int find_third_best_student(float class_marks[], int num_students) {
    int third_best_student_idx = 0;
    int i;
    for (i = 1; i < num_students; i++) {
        if (class_marks[i] > class_marks[third_best_student_idx]) {
            third_best_student_idx = i;
        }
    }
    for (i = 0; i < num_students; i++) {
        if (i == third_best_student_idx) {
            continue;
        }
        if (class_marks[i] == class_marks[third_best_student_idx]) {
            third_best_student_idx = i;
            break;
        }
    }
    return third_best_student_idx;
}

int find_class_with_higher_avg(float class1_marks[], float class2_marks[], int num_students, int third_best_student) {
    int class_with_higher_avg;
    if (class1_marks[third_best_student] > class2_marks[third_best_student]) {
        class_with_higher_avg = 1;
    } else {
        class_with_higher_avg = 2;
    }
    return class_with_higher_avg;
}