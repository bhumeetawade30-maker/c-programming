#include <stdio.h>
int main() {
FILE *file;
int emp_id, n, i;
char name[50];
float salary;
file = fopen("employee.txt", "w");
printf("Enter number of employees: ");
scanf("%d", &n);
for(i = 0; i < n; i++) {
printf("Enter ID, Name, Salary: ");
scanf("%d %s %f", &emp_id, name, &salary);
fprintf(file, "%d %s %.2f\n", emp_id, name, salary);
}
fclose(file);
file = fopen("employee.txt", "r");
printf("\n--- STORED EMPLOYEE DATABASE RECORDS ---\n");
while(fscanf(file, "%d %s %f", &emp_id, name, &salary) == 3) {
printf("ID: %d | Name: %-10s | Salary: %.2f\n", emp_id, name, salary);
}
fclose(file);
return 0;
}
