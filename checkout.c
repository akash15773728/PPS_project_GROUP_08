#include "shop.h"
#include <string.h>

extern Product products[MAX_PRODUCTS];
extern CartItem cart[MAX_CART_ITEMS];
extern int cartCount;

void checkout()
{
    if (cartCount == 0)
    {
        printf("\nCart is empty! Nothing to checkout.\n");
        return;
    }

    float total = 0;

    for (int i = 0; i < cartCount; i++)
    {
        total += cart[i].product->price * cart[i].quantity;
    }

    printf("\n===== CHECKOUT =====\n");
    printf("Subtotal: Rs.%.2f\n", total);

    float discount = 0;
    if (total > 5000)
    {
        discount = total * 0.10;
        printf("Discount (10%%): Rs.%.2f\n", discount);
    }

    float finalAmount = total - discount;
    printf("Final Total: Rs.%.2f\n", finalAmount);

    char name[50];
    char phone[20];
    char address[100];

    printf("\n===== CUSTOMER DETAILS =====\n");

    getchar();

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter phone number: ");
    fgets(phone, sizeof(phone), stdin);

    printf("Enter address: ");
    fgets(address, sizeof(address), stdin);

    name[strcspn(name, "\n")] = 0;
    phone[strcspn(phone, "\n")] = 0;
    address[strcspn(address, "\n")] = 0;

    printf("\n===== ORDER SUMMARY =====\n");
    printf("Name     : %s\n", name);
    printf("Phone    : %s\n", phone);
    printf("Address  : %s\n", address);
    printf("Amount   : Rs.%.2f\n", finalAmount);

    printf("\nOrder Placed Successfully! Thank you for shopping!\n");

    cartCount = 0;
}
