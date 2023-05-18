// #include <stdio.h>
// #include "bubble_sort.c"

// int main() {
//     int i;
//     int size1 = 18;
//     int size2 = 18;// коммент
// /*
//     int array1[size1];
//     for (i = 0; i < size1; i++){
//         scanf("%d", &array1[i]);
//     }
//     printf("enter second");
//     int array2[size2];
//     for (i = 0; i < size2; i++){
//         scanf("%d", &array2[i]);
//     }
//     printf("First class grades:\n");
//     for (i = 0; i < size1; i++) {
//         printf("%d ", array1[i]);
//     }
//     printf("\n");
//     printf("Second class grads:\n");
//     for (i = 0; i < size2; i++) {
//         printf("%d ", array2[i]);
//     }*/
//     int array1[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
//     int array2[] = {11,22,33,44,55,66,77,88,99,11,22,33,44,55,66,77,88,99};
//     printf("\n");
    
//     bubble_sort(array1, size1);
//     bubble_sort(array2, size2);
//     if (array1[size1 - 2] > array2[size2 - 2])
//     {
//         printf("1 class\n");
//     }
//     else {
//         if (array1[size1 - 2] < array2[size2 - 2]) {
//             printf("2 class\n");
//         }
//         else {printf("They are equal:\n");}
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include "class_marks.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Использование: %s <количество_учеников>\n", argv[0]);
        return 1;
    }

    int num_students = atoi(argv[1]);

    float class1_marks[num_students]; 
    float class2_marks[num_students];

    generate_random_marks(class1_marks, num_students);
    generate_random_marks(class2_marks, num_students);

    int third_best_student_idx = find_third_best_student(class1_marks, num_students);

    int class_with_higher_avg = find_class_with_higher_avg(class1_marks, class2_marks, num_students, third_best_student_idx);

    printf("Третий по успеваемости ученик имеет среднюю оценку: %.2f\n", class1_marks[third_best_student_idx]);
    printf("Средняя оценка для третьего по успеваемости ученика выше в классе %d\n", class_with_higher_avg);

    return 0;
}