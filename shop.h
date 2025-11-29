#define SHOP_H

#include <stdio.h>
#define MAX_PRODUCTS 10
#define MAX_CART_ITEMS 50

typedef struct
{
    int id;
    char name[50];
    float price;
} Product;

typedef struct
{
    Product *product;
    int quantity;
} CartItem;

void loadProducts();
void displayProducts();
void addToCart();
void viewCart();
void checkout();
void startShopping();


