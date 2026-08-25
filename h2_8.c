#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void sortById(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].id > arr[j + 1].id) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortByName(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortByGrade(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].grade > arr[j + 1].grade) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(struct Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Id: %d, Name: %s, Grade: %.2f\n", arr[i].id, arr[i].name, arr[i].grade);
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter id, name, grade for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].grade);
    }

    sortById(students, n);
    printf("Sorted by Id:\n");
    display(students, n);

    sortByName(students, n);
    printf("Sorted by Name:\n");
    display(students, n);

    sortByGrade(students, n);
    printf("Sorted by Grade:\n");
    display(students, n);

    return 0;
}
