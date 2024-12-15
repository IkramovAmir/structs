#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char firs_name[20];
    char last_name[20];
} Student;

typedef struct
{
    char name[15];
} Subject;

typedef struct
{
    float score;
    Subject Subject;
    Student student;
} Score;

int main()
{

    Student student1 = {"Akbar", "Vahobov"};
    Student student2 = {"Shaxlo", "Rahmatova"};
    Student student3 = {"Shakhrizoda", "Rahmatova"};

    Subject subject1 = {"Math"};
    Subject subject2 = {"Physics"};
    Subject subject3 = {"Biology"};

    Score scores[9] = {
        {85, subject1, student1},
        {80, subject2, student2},
        {75, subject3, student3},
        {95, subject1, student1},
        {70, subject2, student2},
        {97, subject3, student3},
        {86, subject1, student1},
        {80, subject3, student2},
        {100, subject2, student3},

    };

    printf("Avarage students' scores: \n");
    printf("First Name | Last Name | Subject Name  | Score\n");

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)
    {
        if (scores[i].score >= 85)
        {
            printf("%-10s |  %-10s  |  %-10s  |  %.f\n", scores[i].student.firs_name, scores[i].student.last_name, scores[i].Subject.name, scores[i].score);
        }
        
    }
    

    return 0;
}