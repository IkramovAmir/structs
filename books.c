#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[20];
    int birth_year;
} Author;

typedef struct
{
    char titile[30];
    float price;
    int published_year;
    Author author;
} Book;

int main()
{

    Author author01 = {"Alex Black", 1990};
    Author author02 = {"Mary White", 1985};
    Author author03 = {"John Green", 1975};

    Book books[10] = {
        {"Book A", 25.0, 2021, author01},
        {"Book B", 30.0, 2023, author02},
        {"Book C", 15.0, 1997, author03},
        {"Book D", 20.0, 1880, author02},
        {"Book E", 35.0, 1994, author02},
        {"Book F", 40.0, 1995, author01},
        {"Book G", 10.0, 1790, author02},
        {"Book H", 50.0, 1890, author01},
        {"Book I", 45.0, 1990, author02},
        {"Book J", 60.0, 1890, author03}};


    printf("Books which are published in XXI: \n");
    printf("Title      | Price | Published Year | Author Name | Author Birth Year\n\n");

    for (int i = 0; i < sizeof(books) / sizeof(books[0]); i++)
    {
        if (books[i].published_year >= 2000)
        {
            printf("%-10s |  %.1f  |  %-10d  |  %-10s  |  %-10d\n",books[i].titile, books[i].price, books[i].published_year, books[i].author.name, books[i].author.birth_year);
        }
        
    }

    return 0;
}