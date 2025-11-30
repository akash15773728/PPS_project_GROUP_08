#include "shop.h"
#include <string.h>
extern Product products[MAX_PRODUCTS];
extern CartItem cart[MAX_CART_ITEMS];
extern int cartCount;

void loadProducts()
{

    products[0].id = 1;
    strcpy(products[0].name, "Laptop");
    products[0].price = 55000;

    products[1].id = 2;
    strcpy(products[1].name, "Mouse");
    products[1].price = 399;

    products[2].id = 3;
    strcpy(products[2].name, "Keyboard");
    products[2].price = 799;

    products[3].id = 4;
    strcpy(products[3].name, "Headphones");
    products[3].price = 1499;

    products[4].id = 5;
    strcpy(products[4].name, "USB Cable");
    products[4].price = 199;

    products[5].id = 6;
    strcpy(products[5].name, "Power Bank");
    products[5].price = 1499;

    products[6].id = 7;
    strcpy(products[6].name, "Smart Watch");
    products[6].price = 1999;

    products[7].id = 8;
    strcpy(products[7].name, "Charger");
    products[7].price = 799;

    products[8].id = 9;
    strcpy(products[8].name, "Camera");
    products[8].price = 35000;

    products[9].id = 10;
    strcpy(products[9].name, "Monitor");
    products[9].price = 14999;
}
