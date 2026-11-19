#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice, cmp;

    do {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. String Length (strlen)\n");
        printf("2. String Copy (strcpy)\n");
        printf("3. String Concatenation (strcat)\n");
        printf("4. String Comparison (strcmp)\n");
        printf("5. Substring Search (strstr)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of the string = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string = %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                cmp = strcmp(str1, str2);
                if (cmp == 0)
                    printf("Both strings are equal.\n");
                else if (cmp > 0)
                    printf("First string is greater than second string.\n");
                else
                    printf("First string is smaller than second string.\n");
                break;

            case 5:
                printf("Enter main string: ");
                scanf("%s", str1);
                printf("Enter substring to search: ");
                scanf("%s", str2);
                if (strstr(str1, str2) != NULL)
                    printf("Substring '%s' found in '%s'.\n", str2, str1);
                else
                    printf("Substring not found.\n");
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
