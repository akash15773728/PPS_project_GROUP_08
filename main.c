#include "shop.h"

Product products[MAX_PRODUCTS];
CartItem cart[MAX_CART_ITEMS];
int cartCount = 0;

int main()
{
    startShopping();
    return 0;
}
