/*
*Programmer: Arwa Feroze
*Date: 24/10/2023
*Description:Input bills for all mobile phones in all branches, and calculate and display the total bills, the total bill for each branch, the branch ID where the maximum bill arrived, and the branch and mobile phone IDs where the bill is the highest.
*/

#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter the number of company branches (X): ");
    scanf("%d", &X);
    printf("Enter the number of mobile phones in each branch (Y): ");
    scanf("%d", &Y);

    float bills[X][Y];

    // Input bills for each mobile phone in each branch
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            printf("Enter bill amount for Branch %d, Mobile Phone %d: ", i + 1, j + 1);
            scanf("%f", &bills[i][j]);
        }
    }

    // Initialize variables for calculating totals and tracking maximum bill
    float totalAllBranches = 0;
    float maxBill = bills[0][0];
    int maxBillBranch = 0;
    int maxBillPhoneID = 0;

    // Calculate totals and find the maximum bill
    for (int i = 0; i < X; i++) {
        float totalBranch = 0;
        for (int j = 0; j < Y; j++) {
            totalBranch += bills[i][j];
            totalAllBranches += bills[i][j];

            if (bills[i][j] > maxBill) {
                maxBill = bills[i][j];
                maxBillBranch = i;
                maxBillPhoneID = j;
            }
        }
        printf("Total bill for Branch %d: %.2f\n", i + 1, totalBranch);
    }

    // Print the results
    printf("Total bill for all branches: %.2f\n", totalAllBranches);
    printf("Branch ID where the maximum bill arrived: %d\n", maxBillBranch + 1);
    printf("Branch and Mobile Phone IDs where the bill is the highest: Branch %d, Mobile Phone %d\n", maxBillPhoneBranch + 1, maxBillPhoneID + 1);

    return 0;
}
