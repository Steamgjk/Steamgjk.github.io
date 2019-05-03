#include <stdio.h>
#include <stdlib.h>


int grade(int quiz[], int assignment[], int exam[], int project)
int quiz[3];
int assignment[2];
int exam[1];
int project;


int main()
{


    printf("Enter four quiz grades: ");
    scanf("%d %d %d %d", &quiz[1], &quiz[2], &quiz[3], &quiz[4]);
    printf("%d %d %d %d", quiz[1], quiz[2], quiz[3], quiz[4]);
    printf("\n");

    printf("Enter three assignment grades: ");
    scanf("%d %d %d", &assignment[1], &assignment[2], &assignment[3]);
    printf("%d %d %d", assignment[1], assignment[2], assignment[3]);
    printf("\n");

    printf("Enter two exam grades: ");
    scanf("%d %d", &exam[1], &exam[2]);
    printf("%d %d", exam[1], exam[2]);
    printf("\n");

    printf("Enter project grade: ");
    scanf("%d", &project);
    printf("%d", project);
    printf("\n");

    grade();
}

int grade(int quiz[], int assignment[], int exam[], int project)
{

    int W_quiz = quiz[1] + quiz[2] + quiz[3] + quiz[4] / 4;
    int W_assignment = assignment[1] + assignment[2] + assignment[3] / 3;
    int W_exam = exam[1] + exam[2] / 2;
    int W_Project = project;

    int Total_Grade = (W_quiz * .2) + (W_assignment * .3) + (W_exam * .4) + (W_Project * .1);

    printf("Your total grade is %d", Total_Grade);

}