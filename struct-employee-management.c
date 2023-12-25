/*example of employee structure management*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    char surname[50];
    char department[50];
    char duty[50];
    int salary;
}Employee;

int setEmployee(Employee *employee, char *name, char *surname, char *department,char *duty, int salary);

int main() {
    Employee employee1;

    strcpy(employee1.name, "Merovingian");
    strcpy(employee1.surname , "Matrix");
    strcpy(employee1.department , "Cyber Security");
    strcpy(employee1.duty , "Executive");
    employee1.salary = 10000;

    printf("Default employee1:\n---------------\n");
    printf("Name: %s\nSurname: %s\nDepartment: %s\nDuty: %s\nSalary:%d $\n\n\n", employee1.name, employee1.surname, employee1.department, employee1.duty, employee1.salary);

    setEmployee(&employee1, "Enes", "Buyuk", "Embedded Systems","Manager",15000);
    printf("Modified employee1:\n---------------\n");
    printf("Name: %s\nSurname: %s\nDepartment: %s\nDuty: %s\nSalary:%d $\n\n\n", employee1.name, employee1.surname, employee1.department, employee1.duty, employee1.salary);

    return 0;
}

int setEmployee(Employee *employee, char *name, char *surname, char *department,char *duty, int salary){
    strcpy(employee->name,name);
    strcpy(employee->surname,surname);
    strcpy(employee->department,department);
    strcpy(employee->duty,duty);
    employee->salary = salary;
    return 0;
}
