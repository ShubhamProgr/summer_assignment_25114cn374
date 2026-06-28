// Salary Management System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Salary Management System\n");
        printf("1. Add Employee Record\n");
        printf("2. Generate Salary Report\n");
        printf("3. Search Employee Record\n");
        printf("4. Update Employee Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                add_employee_record();
                break;
            case 2:
                generate_salary_report();
                break;
            case 3:
                search_employee_record();
                break;
            case 4:
                update_employee_record();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 5);

}

struct Employee {
    char name[50];
    int emp_id;
    char department[20];
    int salary;
};

struct Employee employees[200];
int employee_count = 0;

void add_employee_record() {
    if(employee_count >= 200) {
        printf("Maximum employee capacity reached!\n");
        return;
    }

    printf("Enter employee name: ");
    scanf("%s", employees[employee_count].name);
    printf("Enter employee ID: ");
    scanf("%d", &employees[employee_count].emp_id);
    printf("Enter employee department: ");
    scanf("%s", employees[employee_count].department);
    printf("Enter employee salary: ");
    scanf("%d", &employees[employee_count].salary);
    employee_count++;

}

void generate_salary_report(){
    int total_monthly_salary = 0;
    for(int i = 0; i < employee_count; i++) {
        total_monthly_salary += employees[i].salary;
    }
    
    int average_salary = total_monthly_salary / employee_count;
    int highest_salary = employees[0].salary;
    for(int i = 1; i < employee_count; i++) {
        if(employees[i].salary > highest_salary) {
            highest_salary = employees[i].salary;
        }
    }
    printf("Monthly Salary Report:\n");
    printf("Total Employees: %d\n", employee_count);
    printf("Total Monthly Salary: %d\n", total_monthly_salary);
    printf("Average Salary: %d\n", average_salary);
    printf("Highest Salary: %d\n", highest_salary);
}

void search_employee_record() {
    int emp_id;
    printf("Enter employee ID to search: ");
    scanf("%d", &emp_id);
    for(int i = 0; i < employee_count; i++) {
        if(employees[i].emp_id == emp_id) {
            printf("Record Found: Name: %s, Employee ID: %d, Department: %s, Salary: %d\n", employees[i].name, employees[i].emp_id, employees[i].department, employees[i].salary);
            return;
        }
    }
    printf("Record not found!\n");
}

void update_employee_record() {
    int emp_id;
    printf("Enter employee ID to update employee info: ");
    scanf("%d", &emp_id);
    if(emp_id < 0 || emp_id >= employee_count) {
        printf("Invalid employee ID!\n");
        return;
    }
    printf("Select what do you want to update:\n");
    printf("1. Name\n2. Employee ID\n3. Department\n4. Salary\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter new name: ");
            scanf("%s", &employees[emp_id].name);
            break;
        case 2:
            printf("Enter new employee ID: ");
            scanf("%d", &employees[emp_id].emp_id);
            break;
        case 3:
            printf("Enter new department: ");
            scanf("%s", &employees[emp_id].department);
            break;
        case 4:
            printf("Enter new salary: ");
            scanf("%d", &employees[emp_id].salary);
            break;
        default:
            printf("Invalid choice!\n");
    }
    
}