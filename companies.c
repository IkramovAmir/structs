#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[50];
    char location[50];
} Company;


typedef struct
{
    char name[40];
    float price;
    int quantity;
    Company company;
} Product;

int main()
{

    Company company01 = {"Tesla", "USA"};
    Company company02 = {"Mary", "UZB"};
    Company company03 = {"Green", "Uk"};

    Product products[10] = {
        {"Product A", 25.0, 2021, company01},
        {"Product B", 30.0, 2023, company02},
        {"Product C", 15.0, 1997, company03},
        {"Product D", 20.0, 1880, company02},
        {"Product E", 35.0, 1994, company02},
        {"Product F", 40.0, 1995, company01},
        {"Product G", 10.0, 1790, company02},
        {"Product H", 50.0, 1890, company01},
        {"Product I", 45.0, 1990, company02},
        {"Product J", 60.0, 1890, company03}};

    char comp[] = "USA";
    printf("Products which are from USA: \n");
    printf("Name  | Price | Quantity | Company Name | Company Location\n\n");

    for (int i = 0; i < sizeof(products) / sizeof(products[0]); i++)
    {
        if (strcmp(products[i].company.location, comp) == 0)
        {
            printf("%-10s |  %.1f  |  %-10d  |  %-10s  |  %-10s\n",products[i].name, products[i].price, products[i].quantity, products[i].company.name, products[i].company.location);
        }
        
    }

    return 0;
}