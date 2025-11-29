#include "shop.h"
#include <string.h>
#include <stdlib.h>



void startShopping()
{
    loadProducts();

    int choice;

    while (1)
    {
        printf("\n===== SHOP MENU =====\n");
        printf("1. View Products\n");
        printf("2. Add to Cart\n");
        printf("3. View Cart\n");
        printf("4. Checkout\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayProducts(1);
            break;
        case 2:
            addToCart();
            break;
        case 3:
            viewCart();
            break;
        case 4:
            checkout();
            break;
        case 5:
            printf("Thank you for shopping!\n");
            return;
        default:
            printf("Invalid choice!\n");
        }
    }
}