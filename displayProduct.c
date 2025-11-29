#include "shop.h"
#include <string.h>
#include <stdlib.h>
extern Product products[MAX_PRODUCTS];
extern CartItem cart[MAX_CART_ITEMS];
extern int cartCount;

void displayProducts()
{

   printf("\n|-------------------------------------------------------------|\n");
printf("|                     AVAILABLE PRODUCTS                      |\n");
printf("|-------------------------------------------------------------|\n");

for (int i = 0; i < MAX_PRODUCTS; i++)
{
    printf("| %-4d %-22s Rs.%-10.2f                   |\n",
           products[i].id,
           products[i].name,
           products[i].price);
}

printf("|-------------------------------------------------------------|\n");

    
}
