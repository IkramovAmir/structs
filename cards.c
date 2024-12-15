#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char card_holder_name[50];
    char card_number[50];
    int expiry_year;
    int cvv;

} Card;

int main()
{
    Card cards[5] = {
        {"John Doe", "1234 5678 9012 3456", 2029, 123},
        {"Jane Smith", "2345 6789 0123 4567", 2029, 456},
        {"Ali Karimov", "3456 7890 1234 5678", 2025, 789},
        {"Sara Lee", "4567 8901 2345 6789", 2030, 234},
        {"Tom Brown", "5678 9012 3456 7890", 2023, 345}};
    
    printf("Working cards: \n");
    printf("CARD HOLDER NAME | CARD NUMBER  | EXPRITY YEAR | CVV\n\n");

    for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++)
    {
        if (cards[i].expiry_year >= 2024)
        {
            printf("%-10s  |%-10s|  %-10d  |  %-10d  \n", cards[i].card_holder_name, cards[i].card_number, cards[i].expiry_year, cards[i].cvv);
        }
    }

    return 0;
}