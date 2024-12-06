#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

typedef struct {
    char student_id[9];
    int score;
} Student;

int compare_scores(const void *a, const void *b) {
    const Student *student_a = (const Student *)a;
    const Student *student_b = (const Student *)b;
    return student_b->score - student_a->score;
}

int main() {
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }

    Student students[MAX_STUDENTS];
    int num_students = 0;

    // Read scores from input file
    while (fscanf(input_file, "%8s %d", students[num_students].student_id, &students[num_students].score) == 2) {
        num_students++;
    }

    fclose(input_file);

    // Sort the scores in descending order
    qsort(students, num_students, sizeof(Student), compare_scores);

    FILE *output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Failed to create output file.\n");
        return 1;
    }

    // Write sorted scores to outpu==
    for (int i = 0; i < num_students; i++) {
        fprintf(output_file, "%s %d\n", students[i].student_id, students[i].score);
    }

    fclose(output_file);

    printf("Scores sorted and saved to output.txt.\n");

    return 0;
}