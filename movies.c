#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[50];
    char description[50];
} Genre;


typedef struct
{
    char name[40];
    float rating;
    int realease_year;
    Genre  genre;
} Movie;

int main()
{

    Genre genre01 = {"Action", "Action-packed thriller"};
    Genre genre02 = {"Love", "High-octane adventure"};
    Genre genre03 = {"Other", "Other"};

    Movie movies[10] = {
        {"Movie A", 25.0, 2021, genre01},
        {"Movie B", 30.0, 2023, genre02},
        {"Movie C", 15.0, 1997, genre03},
        {"Movie D", 20.0, 1880, genre02},
        {"Movie E", 35.0, 1994, genre01},
        {"Movie F", 40.0, 1995, genre03},
        {"Movie G", 10.0, 1790, genre01},
        {"Movie H", 50.0, 1890, genre02},
        {"Movie I", 45.0, 1990, genre03},
        {"Movie J", 60.0, 1890, genre01}};

    char genre[] = "Action";
    printf("Products which are from USA: \n");
    printf("Name       | Rating | Release Year | Genre Name  | Genre Description\n\n");

    for (int i = 0; i < sizeof(movies) / sizeof(movies[0]); i++)
    {
        if (strcmp(movies[i].genre.name,genre) == 0)
        {
            printf("%-10s |  %.1f  |  %-10d  |  %-10s  |  %-10s\n",movies[i].name, movies[i].rating, movies[i].realease_year, movies[i].genre.name, movies[i].genre.description);
        }
        
    }

    return 0;
}