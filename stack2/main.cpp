#include <iostream>
#include "stack.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("SIMPLE LINKED LIST using structures\n");
    printf("1. Add an element at the back\n");
    printf("2. Delete the last element\n");
    printf("3. Print the stack\n");
    printf("4. Clear stack\n\n");
    printf("5. Exit\n\n");
}

int main()
{
    int value = 0, index = 0, option = 0, errorCode = 0;

    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("Not an integer! Input an integer: ");
            clear();
        }
        switch (option) {
            case 1: // add at the back
                //system("cls");
                printf("Input a number to be added: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = insertBack(value);
                !errorCode ? printf("Added successfully!\n\n") : printf("Failed to add.\n\n");
                break;

            case 2: // delete the last element
                //system("cls");
                errorCode = deleteBack();
                !errorCode ? printf("Last element deleted successfully!\n\n") : printf("Failed to delete the last element.\n\n");
                break;

            case 3: // print the list
               // system("cls");
                printf("Stack: ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;

            case 4: // clear the list
               // system("cls");
                freeList();
                printf("Stack cleared.\n");
                break;

            case 5:
                freeList();
                return 0;

            default:
                system("cls");
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }
    freeList();
    return 0;
}