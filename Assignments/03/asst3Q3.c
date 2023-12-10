/*
*Programmer: Arwa Feroze
*Date: 8/12/2023
*Descrition: This C program merges employee details from two files, `PersonalInfo.txt` and `DepartmentInfo.txt`, based on IDs and generates a combined record in `CombinedInfo.txt`.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

void mergeDetailsToFile(int recordIDs[], int numRecords);

int main() {
    int recordIDs[] = {101, 102, 103};
    int numRecords = sizeof(recordIDs) / sizeof(recordIDs[0]);

    mergeDetailsToFile(recordIDs, numRecords);

    return 0;
}

void mergeDetailsToFile(int recordIDs[], int numRecords) {
    FILE *personalFile, *departmentFile, *combineFile;

    personalFile = fopen("PersonalInfo.txt", "r");
    departmentFile = fopen("DepartmentInfo.txt", "r");
    combineFile = fopen("CombinedInfo.txt", "a");

    if (personalFile == NULL || departmentFile == NULL || combineFile == NULL) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    int currentID, i;
    char name[MAX_NAME_LENGTH];
    float salary;
    int foundPersonal = 0, foundDepartment = 0;

    for (i = 0; i < numRecords; i++) {
        while (fscanf(personalFile, "%d %49s", &currentID, name) != EOF) {
            if (currentID == recordIDs[i]) {
                foundPersonal = 1;
                break;
            }
        }
        fseek(personalFile, 0, SEEK_SET);

        while (fscanf(departmentFile, "%d %f", &currentID, &salary) != EOF) {
            if (currentID == recordIDs[i]) {
                foundDepartment = 1;
                break;
            }
        }
        fseek(departmentFile, 0, SEEK_SET);

        if (foundPersonal && foundDepartment) {
            fprintf(combineFile, "%d %s %.2f\n", currentID, name, salary);
        } else {
            fprintf(combineFile, "Data not found for ID %d\n", recordIDs[i]);
        }

        foundPersonal = 0;
        foundDepartment = 0;
    }

    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}

