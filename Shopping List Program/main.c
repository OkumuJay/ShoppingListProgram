#include <stdio.h>
#include <stdlib.h>

int main()
{
      int choice, quantity;
    float total = 0;

    printf("Menu:\n");
    printf("1. Maize flour - KES 200\n");
    printf("2. Sugar - KES 150\n");
    printf("3. Cooking oil - KES 400\n");
    printf("4. Lentils - KES 300\n");
    printf("5. Soap - KES 150\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += 200 * quantity;
        break;

        case 2:
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += 150 * quantity;
        break;

        case 3:
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += 400 * quantity;
        break;

        case 4:
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += 300 * quantity;
        break;

        case 5:
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        total += 150 * quantity;
        break;

            default:
                break;
        }

        printf("Would you wish to add another item? ( 0 = no, 1 = yes,)\n");
        scanf("%d", &choice);

    } while (choice != 0);

    printf("Total amount to be spent: %.2f\n", total);
    return 0;
}
