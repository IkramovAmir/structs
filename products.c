#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[40];
    char category[50];
    float price;
    int quantity;
} Grocery;

int main()
{
    Grocery groceries[10] = {
        {"Milk", "Dairy", 2.5, 20},
        {"Cheese", "Dairy", 5.0, 10},
        {"Yogurt", "Dairy", 1.5, 50},
        {"Bread", "Bakery", 1.2, 100},
        {"Butter", "Dairy", 3.0, 15},
        {"Eggs", "Dairy", 2.0, 30},
        {"Apple", "Fruit", 1.5, 40},
        {"Orange Juice", "Beverage", 3.5, 25},
        {"Chicken", "Meat", 7.5, 10},
        {"Ice Cream", "Dairy", 4.5, 12}};

    printf("NAME        |   CATEGORY   |PRICE  |  QUANTITY\n\n");

    for (int i = 0; i < sizeof(groceries) / sizeof(groceries[0]); i++)
    {
        printf("%-10s  |  %-10s  |  %.1f  |  %-10d  \n", groceries[i].name, groceries[i].category, groceries[i].price, groceries[i].quantity);
    }

    return 0;
}