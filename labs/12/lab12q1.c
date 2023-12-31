#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 1000
#define MAX_COLS 100

int main() {
    FILE *file = fopen("C:\\Users\\k230022\\Desktop\\my_file.csv", "r"); // Replace "your_csv_file.csv" with the name of your CSV file

    if (file == NULL) {
        printf("error\n");
        return 1;
    }

    char line[1024];
    char *token;
    int rows = 0, cols = 0;
    char *header = NULL;

    // Read header
    if (fgets(line, sizeof(line), file) != NULL) {
        header = strdup(line);
        rows++;
        token = strtok(line, ",");
        while (token != NULL) {
            cols++;
            token = strtok(NULL, ",");
        }
    }

    // Count rows and columns
    while (fgets(line, sizeof(line), file) != NULL) {
        rows++;
    }

    // Display total rows and columns
    printf("Total rows: %d\n", rows);
    printf("Total columns: %d\n\n", cols);

    // Display header followed by a blank line
    printf("%s\n\n", header);

    // Reset file pointer to beginning
    fseek(file, 0, SEEK_SET);

    // Skip the header
    fgets(line, sizeof(line), file);

    // Display data in a tabular form
    while (fgets(line, sizeof(line), file) != NULL) {
        char *data = strtok(line, ",");
        printf("| %s", data);
        while ((data = strtok(NULL, ",")) != NULL) {
            printf("\t| %s", data);
        }
        printf("\t|\n");
    }

    free(header);
    fclose(file);

    return 0;
}

