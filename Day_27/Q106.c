// Employee Management System 

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Employee Management System\n");
        printf("1. Add Employee Record\n");
        printf("2. View All Employee Records\n");
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
                view_all_employee_records();
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
    int salary[10];
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
    scanf("%s", employees[employee_count].salary);
    employee_count++;

}

void view_all_employee_records() {
    printf("Employee Records:\n");
    for(int i = 0; i < employee_count; i++) {
        printf("Name: %s, Employee ID: %d, Department: %s, Salary: %s\n", employees[i].name, employees[i].emp_id, employees[i].department, employees[i].salary);
    }
}

void search_employee_record() {
    int emp_id;
    printf("Enter employee ID to search: ");
    scanf("%d", &emp_id);
    for(int i = 0; i < employee_count; i++) {
        if(employees[i].emp_id == emp_id) {
            printf("Record Found: Name: %s, Employee ID: %d, Department: %s, Salary: %s\n", employees[i].name, employees[i].emp_id, employees[i].department, employees[i].salary);
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
            scanf("%s", employees[emp_id].name);
            break;
        case 2:
            printf("Enter new employee ID: ");
            scanf("%d", &employees[emp_id].emp_id);
            break;
        case 3:
            printf("Enter new department: ");
            scanf("%s", employees[emp_id].department);
            break;
        case 4:
            printf("Enter new salary: ");
            scanf("%s", employees[emp_id].salary);
            break;
        default:
            printf("Invalid choice!\n");
    }
    
}
