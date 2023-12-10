/*
*Programmer: Arwa Feroze
*Date:8/12/2023
*Description:The program showcases worker details, displaying workers with the highest salary in each department and the total salaries per department.
*/

#include <stdio.h>
#include <string.h>

typedef struct worker {
    int id;
    char firstname[50];
    char lastname[50];
    int salary;
    char joiningdate[50];
    char department[50];
} Worker;

Worker workers[] = {
    {001, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
    {002, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
    {003, "Vishal", "Verma", 300000, "2014-02-20 09:00:00", "HR"},
    {004, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
    {005, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
    {006, "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
    {007, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
    {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
};

void maxSalaryWorkers(int numWorkers) {
    int maxSalary[3] = {0};
    int i;

    for ( i = 0; i < numWorkers; i++) {
        if (strcmp(workers[i].department, "HR") == 0 && workers[i].salary > maxSalary[0]) {
            maxSalary[0] = workers[i].salary;
        } else if (strcmp(workers[i].department, "Admin") == 0 && workers[i].salary > maxSalary[1]) {
            maxSalary[1] = workers[i].salary;
        } else if (strcmp(workers[i].department, "Account") == 0 && workers[i].salary > maxSalary[2]) {
            maxSalary[2] = workers[i].salary;
        }
    }

    printf("\nDetails of workers with maximum salary for each department:\n\n");

    for ( i = 0; i < numWorkers; i++) {
        if (workers[i].salary == maxSalary[0] && strcmp(workers[i].department, "HR") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        } else if (workers[i].salary == maxSalary[1] && strcmp(workers[i].department, "Admin") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        } else if (workers[i].salary == maxSalary[2] && strcmp(workers[i].department, "Account") == 0) {
            printf("00%d %s %s %d %s %s\n\n", workers[i].id, workers[i].firstname, workers[i].lastname, workers[i].salary, workers[i].joiningdate, workers[i].department);
        }
    }

    printf("\n\n");
}

void totalSalaries(int numWorkers) {
    int totalSalary[3] = {0};
    int i;

    for ( i = 0; i < numWorkers; i++) {
        if (strcmp(workers[i].department, "HR") == 0) {
            totalSalary[0] += workers[i].salary;
        } else if (strcmp(workers[i].department, "Admin") == 0) {
            totalSalary[1] += workers[i].salary;
        } else if (strcmp(workers[i].department, "Account") == 0) {
            totalSalary[2] += workers[i].salary;
        }
    }

    printf("Departments along with total salaries:\n\n");
    printf("\tHR - %d\n", totalSalary[0]);
    printf("\tAdmin - %d\n", totalSalary[1]);
    printf("\tAccount - %d\n", totalSalary[2]);
}

int main() {
    printf("Arwa Feroze 23k-0022\n");
    int numWorkers = sizeof(workers) / sizeof(workers[0]);
    maxSalaryWorkers(numWorkers);
    totalSalaries(numWorkers);

    return 0;
}

