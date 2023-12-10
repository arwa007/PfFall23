/*
*Programmer: Arwa Feroze
*Date: 8/12/2023
*Description:This C program utilizes structures to simulate a retail company's departments (HR, Finance, Marketing, Logistics) with employees' attributes (Name, Role, Communication, Teamwork, Creativity). It initializes employee details randomly and computes the departmental sums, determining the "Best Department" based on these sums. The program then displays the attributes of the winning department in a tabular format.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Department {
    char EmployeeName[20];
    char EmployeeRole[20];
    int CommunicationSkill;
    int TeamworkSkill;
    int CreativitySkill;
};

char* getRandomName(char Names[20][20], int NameUsed[20]);
char* getRandomRole(char Roles[5][20], int RoleUsed[5]);
int initializeDepartment(struct Department dept[], char Names[20][20], int NameUsed[20]);
void printDepartment(struct Department dept[], char DepartmentName[20]);
int calculateDepartmentSum(struct Department dept[]);

int main() {
    int i;
    printf("Arwa Feroze\n23k-0022\n");
    srand(time(NULL));

    char NamePool[20][20] = {"Ali", "Zoya", "David", "Sara",
                              "Ella", "Noah", "Sophia", "Omar",
                              "Lily", "William", "Ava", "Ethan",
                              "Emma", "Oliver", "Amelia", "Lucas",
                              "Mia", "James", "Grace", "Daniel"};
    int NameUsed[20];
    for (i = 0; i < 20; i++) {
        NameUsed[i] = 0;
    }

    struct Department HRDept[5];
    struct Department FinanceDept[5];
    struct Department MarketingDept[5];
    struct Department LogisticsDept[5];

    initializeDepartment(HRDept, NamePool, NameUsed);
    initializeDepartment(FinanceDept, NamePool, NameUsed);
    initializeDepartment(MarketingDept, NamePool, NameUsed);
    initializeDepartment(LogisticsDept, NamePool, NameUsed);

    int departmentSums[4] = {calculateDepartmentSum(HRDept), calculateDepartmentSum(FinanceDept),
                             calculateDepartmentSum(MarketingDept), calculateDepartmentSum(LogisticsDept)};
    printf("\nDepartment Sums:\n");
    printf("HR: %d\nFinance: %d\nMarketing: %d\nLogistics: %d\n", departmentSums[0], departmentSums[1],
           departmentSums[2], departmentSums[3]);

    int maxIndex = 0;
    int maxSum = departmentSums[0];
    for (i = 0; i < 4; i++) {
        if (departmentSums[i] > maxSum) {
            maxSum = departmentSums[i];
            maxIndex = i;
        }
    }

    printf("\nBest Department:\n");
    switch (maxIndex) {
        case 0:
            printf("HR\n");
            printDepartment(HRDept, "HR");
            break;

        case 1:
            printf("Finance\n");
            printDepartment(FinanceDept, "Finance");
            break;

        case 2:
            printf("Marketing\n");
            printDepartment(MarketingDept, "Marketing");
            break;

        case 3:
            printf("Logistics\n");
            printDepartment(LogisticsDept, "Logistics");
            break;

        default:
            break;
    }

    return 0;
}

char* getRandomName(char Names[20][20], int NameUsed[20]) {
    while (1) {
        int randomIndex = rand() % 20;
        if (NameUsed[randomIndex] == 0) {
            NameUsed[randomIndex] = 1;
            return Names[randomIndex];
        }
    }
}

char* getRandomRole(char Roles[5][20], int RoleUsed[5]) {
    while (1) {
        int randomIndex = rand() % 5;
        if (RoleUsed[randomIndex] == 0) {
            RoleUsed[randomIndex] = 1;
            return Roles[randomIndex];
        }
    }
}

int initializeDepartment(struct Department dept[], char Names[20][20], int NameUsed[20]) {
    int i;
    char Roles[5][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};
    int RoleUsed[5] = {0, 0, 0, 0, 0};
    for (i = 0; i < 5; i++) {
        strcpy(dept[i].EmployeeName, getRandomName(Names, NameUsed));
        strcpy(dept[i].EmployeeRole, getRandomRole(Roles, RoleUsed));
        dept[i].CommunicationSkill = rand() % 101;
        dept[i].CreativitySkill = rand() % 101;
        dept[i].TeamworkSkill = rand() % 101;
    }
}

void printDepartment(struct Department dept[], char DepartmentName[20]) {
    int i;

    printf("\n------------------------------------------------------------------------\n");
    printf("| %-10s | %-15s | Communication | Creativity | Teamwork |\n", "Name", "Role");
    printf("------------------------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("| %-10s | %-15s | %-13d | %-10d | %-8d |\n",
               dept[i].EmployeeName,
               dept[i].EmployeeRole,
               dept[i].CommunicationSkill,
               dept[i].CreativitySkill,
               dept[i].TeamworkSkill);
    }

    printf("------------------------------------------------------------------------\n");
}


int calculateDepartmentSum(struct Department dept[]) {
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++) {
        sum += dept[i].CommunicationSkill + dept[i].CreativitySkill + dept[i].TeamworkSkill;
    }
    return sum;
}

