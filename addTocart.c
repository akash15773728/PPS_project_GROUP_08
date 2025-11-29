#include "shop.h"

void addToCart()
{
    int id, qty;
    char choice;

    while (1)
    {

        // it shows product list
        displayProducts(0);

        printf("\nEnter Product ID to add: ");
        scanf("%d", &id);

        if (id < 1 || id > MAX_PRODUCTS)
        {
            printf("Invalid ID!\n");
        }
        else
        {
            printf("Enter Quantity: ");
            scanf("%d", &qty);

            if (qty <= 0)
            {
                printf("Invalid quantity!\n");
            }
            else
            {
                cart[cartCount].product = &products[id - 1];
                cart[cartCount].quantity = qty;
                cartCount++;

                printf("Item added successfully!\n");
            }
        }

        printf("\nDo you want to add more items? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
        {
            printf("\nReturning to main menu...\n");
            break;
        }
    }
}
