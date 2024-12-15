#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char MODERN[50];
    char BRAND[50];
    int PRICE;
    int YEAR;
} Car;

int main()
{

    Car cars[10] = {
        {"Model S", "Tesla", 79999, 2022},
        {"Civic", "Honda", 24000, 2023},
        {"Camry", "Toyota", 27000, 2023},
        {"Mustang", "Ford", 55000, 2022},
        {"911", "Porsche", 120000, 2021},
        {"Aventador", "Lamborghini", 393695, 2023},
        {"Corolla", "Toyota", 20000, 2021},
        {"Phantom", "Rolls Royce", 450000, 2023},
        {"Altima", "Nissan", 25000, 2022},
        {"CX-5", "Mazda", 28000, 2023}};

    Car maxCar = cars[0];

    for (int i = 1; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        if (maxCar.PRICE < cars[i].PRICE)
        {
            maxCar = cars[i];
        }
    }

    printf("The most expensive car:\n");
    printf(" %s  |  %s  |  %d  |  %d\n", maxCar.MODERN, maxCar.BRAND, maxCar.PRICE, maxCar.YEAR);
    printf("\n\n");

    return 0;
}