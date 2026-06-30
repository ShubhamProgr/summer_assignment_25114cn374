// Student Record System using arrays and strings 

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    char branch[20];
    char cgpa[10]; 
};

struct Student students[200];
int student_count = 0;

void add_student_record();
void view_all_student_records();
void search_student_record();
void update_student_record();

int main() {
    int key;

    do {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student Record\n");
        printf("2. View All Student Records\n");
        printf("3. Search Student Record\n");
        printf("4. Update Student Record\n");
        printf("5. View Topper\n");
        printf("6. Filter Students\n");
        printf("Enter your choice: ");
        scanf("%d", &key);
        printf("----------------------------------------\n");

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
                view_topper();
                break;
            case 6:
                filter_students();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(key != 6);

    return 0;
}

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
    printf("Record added successfully!\n");
}

void view_all_student_records() {
    if (student_count == 0) {
        printf("No records found. Please add a student first.\n");
        return;
    }

    printf("Student Records:\n");
    for(int i = 0; i < student_count; i++) {
        printf("[%d] Name: %s, Roll No: %d, Branch: %s, CGPA: %s\n", 
               i+1, students[i].name, students[i].roll_no, students[i].branch, students[i].cgpa);
    }
}

void search_student_record() {
    int roll_no;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_no);
    
    for(int i = 0; i < student_count; i++) {
        if(students[i].roll_no == roll_no) {
            printf("Record Found -> Name: %s, Roll No: %d, Branch: %s, CGPA: %s\n", 
                   students[i].name, students[i].roll_no, students[i].branch, students[i].cgpa);
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

void view_topper() {
    if (student_count == 0) {
        printf("No records found. Please add a student first.\n");
        return;
    }

    int topper_index = 0;
    for(int i = 1; i < student_count; i++) {
        if(atof(students[i].cgpa) > atof(students[topper_index].cgpa)) {
            topper_index = i;
        }
    }
    printf("Topper -> Name: %s, Roll No: %d, Branch: %s, CGPA: %s\n", 
           students[topper_index].name, students[topper_index].roll_no, 
           students[topper_index].branch, students[topper_index].cgpa);
}

void filter_students() {
    if (student_count == 0) {
        printf("No records found. Please add a student first.\n");
        return;
    }

    printf("Select how do you want to filter students:\n");
    printf("1. By Branch\n2. By CGPA\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            filter_by_branch();
            break;
        case 2:
            filter_by_cgpa();
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void filter_by_branch() {
    char branch[20];
    printf("Enter branch to filter students: ");
    scanf("%s", branch);

    int found = 0;
    printf("Students in branch %s:\n", branch);
    for(int i = 0; i < student_count; i++) {
        if(strcmp(students[i].branch, branch) == 0) {
            printf("[%d] Name: %s, Roll No: %d, CGPA: %s\n", 
                   i+1, students[i].name, students[i].roll_no, students[i].cgpa);
            found = 1;
        }
    }
    if(!found) {
        printf("No students found in this branch.\n");
    }
}

void filter_by_cgpa() {
    float min_cgpa;
    printf("Enter minimum CGPA to filter students: ");
    scanf("%f", &min_cgpa);

    int found = 0;
    printf("Students with CGPA >= %.2f:\n", min_cgpa);
    for(int i = 0; i < student_count; i++) {
        if(atof(students[i].cgpa) >= min_cgpa) {
            printf("[%d] Name: %s, Roll No: %d, Branch: %s, CGPA: %s\n", 
                   i+1, students[i].name, students[i].roll_no, students[i].branch, students[i].cgpa);
            found = 1;
        }
    }
    if(!found) {
        printf("No students found with the specified CGPA.\n");
    }
}