#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char name[15];
    char brand[25];
    int price;
    char ram[25];
    char color[15];
} Phones;

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
    Phones phone1 = {"Galaxy S20", "Samsung", 800, "8GB", "Black"};
    Phones phone2 = {"iPhone 12", "Apple", 1000, "6GB", "White"};
    Phones phone3 = {"Pixel 6", "Google", 600, "8GB", "Blue"};
    Phones phone4 = {"Redmi Note 10", "Xiaomi", 200, "4GB", "Gray"};
    Phones phone5 = {"Galaxy S20", "Samsung", 800, "8GB", "Black"};
    Phones phone6 = {"OnePlus 9", "OnePlus", 700, "12GB", "Black"};
    Phones phone7 = {"Galaxy A51", "Samsung", 400, "6GB", "White"};
    Phones phone8 = {"iPhone SE", "Apple", 500, "3GB", "Red"};
    Phones phone9 = {"Moto G Power", "Motorola", 300, "4GB", "Blue"};
    Phones phone10 = {"Nokia 8.3", "Nokia", 650, "8GB", "Green"};
    Phones phone11 = {"Xperia 5 II", "Sony", 900, "8GB", "Black"};

    Phones phones[] = {phone1, phone2, phone3, phone4, phone5, phone6, phone7, phone8, phone9, phone10, phone11};

    struct Jadval jadval1 = {"NAME", "BRAND", "PRICE", "RAM", "COLOR"};
    printf("Phones which are higher than 500$: \n\n");

    printf("%-10s | %-10s | PRICE        | %-12s | %-15s \n", jadval1.name, jadval1.surename, jadval1.location, jadval1.number);

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");

    for (int i = 0; i < sizeof(phones) / sizeof(phones[0]); i++)
    {
        if (phones[i].price >= 500)
        {
            printf("%-10s | %-10s | %-12d |  %-12s | %-15s\n", phones[i].name, phones[i].brand, phones[i].price, phones[i].ram, phones[i].color);
        }
    }
    return 0;
}