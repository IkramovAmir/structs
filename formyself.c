#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;


typedef struct 
{
    char name[12];
    float gpa;
} Students;

int main()
{

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Amir");
    player1.score = 10;

    strcpy(player2.name, "Umar");
    player2.score = 11;

    printf("Player 1 is: %s\n", player1.name);
    printf("His score is: %d\n", player1.score);

    printf("Player 2 is: %s\n", player2.name);
    printf("His score is: %d\n", player2.score);

    printf("\n");
    printf("\n\n");

    User user1 = {"Amir", "amfaihasfj", 12345678};
    User user2 = {"khan", "adfafdfdddf", 98765432};


    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n\n");

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    printf("\n\n");

    Students student1 = {"Hamdam", 3.0};
    Students student2 = {"Damdam", 2.5};
    Students student3 = {"Shamshod", 4.5};
   
    // printf("%s\n", student1.name);
    // printf("%.1f\n", student1.gpa);
    // printf("%s\n", student2.name);
    // printf("%.1f\n", student2.gpa);
    // printf("%s\n", student3.name);
    // printf("%.1f\n", student3.gpa);
    // printf("\n\n");

    Students students[] = {student1, student2, student3};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {

        printf("%-10s\t", students[i].name);
        printf("%.1f\n", students[i].gpa);
    }
    
    return 0;
}
