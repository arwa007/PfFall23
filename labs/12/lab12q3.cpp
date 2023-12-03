#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 50

struct Course {
    char code[20];
    char name[50];
    float gpa;
    int semester;
    int credit_hours;
};

void saveToFile(struct Course courses[], int count) {
    FILE *file = fopen("transcript.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(file, "Course Code\tCourse Name\t\t\tGPA\tSemester\tCredit Hours\n");
    for (int i = 0; i < count; ++i) {
        fprintf(file, "%s\t\t%s\t\t\t%.2f\t%d\t\t%d\n",
                courses[i].code, courses[i].name, courses[i].gpa, courses[i].semester, courses[i].credit_hours);
    }

    fclose(file);
    printf("Data saved to transcript.txt\n");
}

void viewTranscript() {
    FILE *file = fopen("transcript.txt", "r");
    if (file == NULL) {
        printf("No transcript found.\n");
        return;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    fclose(file);
}

float calculateCGPA(struct Course courses[], int count) {
    float totalPoints = 0.0, totalCredits = 0.0;
    for (int i = 0; i < count; ++i) {
        totalPoints += courses[i].gpa * courses[i].credit_hours;
        totalCredits += courses[i].credit_hours;
    }

    if (totalCredits == 0) {
        printf("No courses found.\n");
        return 0.0;
    }

    return totalPoints / totalCredits;
}

float calculateSGPA(struct Course courses[], int count, int semester) {
    float totalPoints = 0.0, totalCredits = 0.0;
    for (int i = 0; i < count; ++i) {
        if (courses[i].semester == semester) {
            totalPoints += courses[i].gpa * courses[i].credit_hours;
            totalCredits += courses[i].credit_hours;
        }
    }

    if (totalCredits == 0) {
        printf("No courses found for this semester.\n");
        return 0.0;
    }

    return totalPoints / totalCredits;
}

int main() {
    struct Course courses[MAX_COURSES];
    int count = 0;
    int choice;

    do {
        printf("\n1. Add Course\n2. View Transcript\n3. Calculate CGPA\n4. Calculate SGPA\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_COURSES) {
                    printf("Enter course code: ");
                    scanf("%s", courses[count].code);
                    printf("Enter course name: ");
                    scanf("%s", courses[count].name);
                    printf("Enter course GPA: ");
                    scanf("%f", &courses[count].gpa);
                    printf("Enter semester: ");
                    scanf("%d", &courses[count].semester);
                    printf("Enter credit hours: ");
                    scanf("%d", &courses[count].credit_hours);
                    count++;
                    saveToFile(courses, count); // Save to file after each addition
                } else {
                    printf("Maximum course limit reached.\n");
                }
                break;
            case 2:
                viewTranscript();
                break;
            case 3:
                printf("CGPA: %.2f\n", calculateCGPA(courses, count));
                break;
            case 4:
                int semester;
                printf("Enter semester to calculate SGPA: ");
                scanf("%d", &semester);
                printf("SGPA for semester %d: %.2f\n", semester, calculateSGPA(courses, count, semester));
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

