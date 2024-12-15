#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct User
{
    char name[12];
    char surename[12];
    char birthyear[5];
    char birthcity[25];
    char number[25];
};

struct Jadval
{
    char name[50];
    char surename[50];
    char birthyear[50];
    char location[50];
    char number[50];
};

int main()
{

    struct User user1 = {"John", "Doe", "1990", "Tashkent", "+998910331205"};
    struct User user2 = {"Jane", "Smith", "1995", "Samarqand", "+998912982933"};
    struct User user3 = {"Ali", "Karimov", "2000", "Bukhara", "+998976122440"};

    struct User users[] = {user1, user2, user3};

    struct Jadval jadval1 = {"NAME", "SURENAME", "BIRTH YEAR", "LOCATION", "PHONE"};

    printf("%-10s | %-10s | %-12s | %-12s | %-15s \n", jadval1.name, jadval1.surename, jadval1.birthyear, jadval1.location, jadval1.number);
    
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");

    for (int i = 0; i < sizeof(users) / sizeof(users[0]); i++)
    {
        printf("%-10s|%-10s| %-12s |  %-12s| %-15s\n", users[i].name, users[i].surename, users[i].birthyear, users[i].birthcity, users[i].number);
    }

    return 0;
}