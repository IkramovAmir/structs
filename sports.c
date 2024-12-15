#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[30];
    int capacity;
} Stadium;

typedef struct
{
    char team_name[20];
    char coach[20];
    int players_count;
    int founded_year;
    Stadium stadium;
} Team;

int main(){

    Stadium stadium1 = {"Stadium A", 1949};
    Stadium stadium2 = {"Stadium B", 1948};
    Stadium stadium3 = {"Stadium3", 1998};


    Team teams[] = {
        {"Name A", "Coman", 11, 1949, stadium1 },
        {"Name B", "Coman2", 11, 1949, stadium1 },
        {"Name C", "Coman3", 11, 1949, stadium1 },
        {"Name A", "Coman4", 11, 1949, stadium1 },
        {"Name B", "Coman5", 11, 1949, stadium1 },
        {"Name C", "Coman6", 11, 1949, stadium1 },
        {"Name A", "Coman7", 11, 1949, stadium1 },
        {"Name B", "Coman8", 11, 1949, stadium1 },
        {"Name C", "Coman9", 11, 1949, stadium1 },
        {"Name A", "Coman10", 11, 1949, stadium1 },
    };
    
    printf("The oldest team: \n");
    printf("Team Name | Coach   | Players Count | Founded Year | Stadium Name\n");

    Team minYear = teams[0];
    for (int i = 1; i < sizeof(teams) / sizeof(teams[0]); i++)
    {
        if (teams[i].founded_year < minYear.founded_year)
        {
            minYear.founded_year = teams[i].founded_year;
        }
    }

    printf("%-10s| %-10s|  %-10d|  %-10d  | %-10s  ", minYear.team_name, minYear.coach, minYear.players_count, minYear.founded_year, minYear.stadium);
    
    return 0;
}