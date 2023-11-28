#include <stdio.h>
#include <stdlib.h>

int compareFiles(const char *file1, const char *file2) {
    FILE *fp1, *fp2;
    int byte1, byte2;

    fp1 = fopen(file1, "rb");
    fp2 = fopen(file2, "rb");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        return -1; // Error opening files
    }

    do {
        byte1 = fgetc(fp1);
        byte2 = fgetc(fp2);

        if (byte1 != byte2) {
            fclose(fp1);
            fclose(fp2);
            return 0; // Files are not equal
        }
    } while (byte1 != EOF && byte2 != EOF);

    fclose(fp1);
    fclose(fp2);

    return 1; // Files are equal
}

int main() {
    const char *file1 = "C:\\Users\\k230022\\Desktop\\test1.docx";
    const char *file2 = "C:\\Users\\k230022\\Desktop\\test2.docx"; 

    int result = compareFiles(file1, file2);

    if (result == -1) {
        printf("Error opening files.\n");
    } else if (result == 0) {
        printf("The files are not equal.\n");
    } else {
        printf("The files are equal.\n");
    }

    return 0;
}

