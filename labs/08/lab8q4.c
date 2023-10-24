/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Desc:  password length validation and user authentication
*/
#include <stdio.h>
#include <string.h>

int main() {
    char enteredPassword[100];  
    char storedPassword[] = "Secure123";  

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    if (strlen(enteredPassword) >= 8) {
        if (strcmp(enteredPassword, storedPassword) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    } else {
        printf("Password is too short. It must be at least 8 characters long.\n");
    }

    return 0;
}
