#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, re, ch;
    printf("Enter 1st no.\n");
    scanf("%d", &a);
    printf("Enter 2nd no.\n");
    scanf("%d", &b);

    while (1)
    {
        printf("\n 1 addition \n 2 subtraction \n 3 multiplication \n 4 division \n 5 exit \n");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                re = a + b;
                printf("Addition is %d\n", re);
                break;
            case 2:
                re = a - b;
                printf("Subtraction is %d\n", re);
                break;
            case 3:
                re = a * b;
                printf("Product is %d\n", re);
                break;
             case 4:
                if (b != 0)
                {
                    re = a / b;
                    printf("Division is %d\n", re);
                }
                else
                {
                    printf("Error: Division by zero\n");
                }
                break;
            case 5:
                printf("Exiting the program...\n");
                exit(0);
            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}











