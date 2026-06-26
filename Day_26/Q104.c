// Program for a quiz application

#include <stdio.h>

int main(){
    int score = 0, answer;

    printf("Welcome to the Quiz Application!\n");
    printf("Question 1: What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Incorrect! The correct answer is Paris.\n");
    }

    printf("\nQuestion 2: Who is the CEO of Tesla?\n");
    printf("1. Mark Zuckerberg\n2. Jeff Bezos\n3. Elon Musk\n4. Bill Gates\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Incorrect! The correct answer is Elon Musk.\n");
    }

    printf("\nYour total score is: %d / 2\n", score);

    return 0;
}