#include <stdio.h>
#include <stdlib.h>

void mergeDetailsToFile(int recordIDs[], int numRecords);

int main() {
    // Sample record IDs to process
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
    char name[50];
    float salary;

    for (i = 0; i < numRecords; i++) {
        currentID = recordIDs[i];

        fseek(personalFile, 0, SEEK_SET);
        while (fscanf(personalFile, "%d %s", &currentID, name) != EOF) {
            if (currentID == recordIDs[i]) {
                fseek(departmentFile, 0, SEEK_SET);
                while (fscanf(departmentFile, "%d %f", &currentID, &salary) != EOF) {
                    if (currentID == recordIDs[i]) {
                        fprintf(combineFile, "%d %s %.2f\n", currentID, name, salary);
                        break;
                    }
                }
                break;
            }
        }
    }

    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}

