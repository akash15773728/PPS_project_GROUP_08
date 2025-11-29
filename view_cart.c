#include "shop.h"

extern Product products[MAX_PRODUCTS];
extern CartItem cart[MAX_CART_ITEMS];
extern int cartCount;

void viewCart()
{
    if (cartCount == 0)
    {
        printf("\nCart is empty!\n");
        return;
    }

    printf("\n===== YOUR CART =====\n");
    float total = 0;

    for (int i = 0; i < cartCount; i++)
    {
        float itemTotal = cart[i].product->price * cart[i].quantity;
        printf("%s x %d = Rs.%.2f\n",
               cart[i].product->name,
               cart[i].quantity,
               itemTotal);

        total += itemTotal;
    }

    printf("\nSubtotal: Rs.%.2f\n", total);
}