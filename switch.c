#include <stdio.h>

int main()
{
    int choice;
    printf("Select input type:\n");
    printf("1. Character\n");
    printf("2. Integer\n");
    printf("3. Float\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        char inputChar;
        printf("Enter a character: ");
        scanf(" %c", &inputChar);

        printf("Next four characters are:\n");
        for (int i = 1; i <= 4; i++)
        {
            printf("%c ", inputChar + i);
        }

        printf("\nASCII code of '%c': %d\n", inputChar, inputChar);
        printf("Size of character: %lu bytes\n", sizeof(inputChar));
        break;
    }

    case 2:
    {
        int inputInt;
        printf("Enter an integer: ");
        scanf("%d", &inputInt);

        printf("Next four integers in multiples of 3:\n");
        for (int i = 1; i <= 4; i++)
        {
            printf("%d ", inputInt + i * 3);
        }

        printf("\nSize of integer: %lu bytes\n", sizeof(inputInt));
        break;
    }

    case 3:
    {
        float inputFloat;
        printf("Enter a float: ");
        scanf("%f", &inputFloat);

        printf("Next four floats in multiples of 3:\n");
        for (int i = 1; i <= 4; i++)
        {
            printf("%.2f ", inputFloat + i * 3.0);
        }

        printf("\nSize of float: %lu bytes\n", sizeof(inputFloat));
        break;
    }

    default:
        printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }

    return 0;
}
