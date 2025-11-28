#include "shop.h"
#include <string.h>

void loadProducts()
{
    char *names[MAX_PRODUCTS] = {
        "Laptop", "Mouse", "Keyboard", "Headphones", "USB Cable",
        "Power Bank", "Smart Watch", "Charger", "Camera", "Monitor"
    };

    float prices[MAX_PRODUCTS] = {55000, 599, 999, 1499, 199, 1299, 2499, 799, 35000, 8500};

    for (int i = 0; i < MAX_PRODUCTS; i++) {
        products[i].id = i + 1;
        strcpy(products[i].name, names[i]);
        products[i].price = prices[i];
    }
}