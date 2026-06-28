// Student Record Management System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Student Record Management System\n");
        printf("1. Add Student Record\n");
        printf("2. View All Student Records\n");
        printf("3. Search Student Record\n");
        printf("4. Update Student Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                add_student_record();
                break;
            case 2:
                view_all_student_records();
                break;
            case 3:
                search_student_record();
                break;
            case 4:
                update_student_record();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 5);


}

struct Student {
    char name[50];
    int roll_no;
    char branch[20];
    int cgpa[5];
};

struct Student students[200];
int student_count = 0;

void add_student_record() {
    if(student_count >= 200) {
        printf("Maximum student capacity reached!\n");
        return;
    }

    printf("Enter student name: ");
    scanf("%s", students[student_count].name);
    printf("Enter student roll number: ");
    scanf("%d", &students[student_count].roll_no);
    printf("Enter student branch: ");
    scanf("%s", students[student_count].branch);
    printf("Enter student CGPA: ");
    scanf("%s", students[student_count].cgpa);
    student_count++;

}

void view_all_student_records() {
    printf("Student Records:\n");
    for(int i = 0; i < student_count; i++) {
        printf("Name: %s, Roll No: %d, Branch: %s, CGPA: %s\n", students[i].name, students[i].roll_no, students[i].branch, students[i].cgpa);
    }
}

void search_student_record() {
    int roll_no;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_no);
    for(int i = 0; i < student_count; i++) {
        if(students[i].roll_no == roll_no) {
            printf("Record Found: Name: %s, Roll No: %d, Branch: %s, CGPA: %s\n", students[i].name, students[i].roll_no, students[i].branch, students[i].cgpa);
            return;
        }
    }
    printf("Record not found!\n");
}

void update_student_record() {
    int roll_no;
    printf("Enter roll number to update student info: ");
    scanf("%d", &roll_no);
    if(roll_no < 0 || roll_no >= student_count) {
        printf("Invalid roll number!\n");
        return;
    }
    printf("Select what do you want to update:\n");
    printf("1. Name\n2. Roll Number\n3. Branch\n4. CGPA\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter new name: ");
            scanf("%s", students[roll_no].name);
            break;
        case 2:
            printf("Enter new roll number: ");
            scanf("%d", &students[roll_no].roll_no);
            break;
        case 3:
            printf("Enter new branch: ");
            scanf("%s", students[roll_no].branch);
            break;
        case 4:
            printf("Enter new CGPA: ");
            scanf("%s", students[roll_no].cgpa);
            break;
        default:
            printf("Invalid choice!\n");
    }
    
}