// Marksheet Generation System

#include <stdio.h>

int main(){
    int key;

    do{
        printf("Marksheet Generation System\n");
        printf("1. Add Student Record\n");
        printf("2. Generate Marksheet\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &key);

        switch(key) {
            case 1:
                add_student_record();
                break;
            case 2:
                generate_marksheet();
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(key != 3);
}

struct Student {
    char name[50];
    int roll_no;
    int Physics;
    int Chemistry;
    int Maths;
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
    printf("Enter student Physics marks: ");
    scanf("%d", &students[student_count].Physics);
    printf("Enter student Chemistry marks: ");
    scanf("%d", &students[student_count].Chemistry);
    printf("Enter student Maths marks: ");
    scanf("%d", &students[student_count].Maths);
    student_count++;
}

void generate_marksheet() {
    int roll_no;
    printf("Enter roll number to generate marksheet: ");
    scanf("%d", &roll_no);
    for(int i = 0; i < student_count; i++) {
        if(students[i].roll_no == roll_no) {
            printf("Marksheet for Roll No: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Physics: %d\n", students[i].Physics);
            printf("Chemistry: %d\n", students[i].Chemistry);
            printf("Maths: %d\n", students[i].Maths);
            int total = students[i].Physics + students[i].Chemistry + students[i].Maths;
            float average = total / 3.0;
            int cgpa = (average / 10);
            printf("CGPA: %d\n", cgpa);`
            printf("Total Marks: %d\n", total);
            printf("Average Marks: %.2f\n", average);
            return;
        }
    }
    printf("Record not found!\n");
}