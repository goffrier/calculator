#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int choice;
    int running = 1;

    printf("welcome to the ultimate shitpost");
    ;
    {
        printf("\n1. Add\n");
        printf("\n2. Multiply\n");
        printf("\n3. Divide\n");
        printf("\n4. Substract\n");
        scanf("%d", &choice);
    }
    switch (choice)
        do {
            int numbr;
            int numbr_add;
            int numbr_mult;
            int numbr_div;
            int numbr_sub;
        case 1:
            printf("\nenter a number to add to\n");
            scanf("%d", &numbr_add);
            printf("\nenter a number to add\n");
            scanf("%d", &numbr);
            printf("\n%d\n", numbr_add + numbr);
            break;
        case 2:
            printf("\nenter a number to multiply to\n");
            scanf("%d", &numbr_mult);
            printf("\nenter a number to multiply\n");
            scanf("%d", &numbr);
            printf("\n%d\n", numbr_mult * numbr);
            break;
        case 3:
            printf("\nenter a number to divide to\n");
            scanf("%d", &numbr_div);
            printf("\nenter a number to divide\n");
            scanf("%d", &numbr);
            printf("\n%d\n", numbr_div / numbr);
            break;
        case 4:
            printf("\nenter a number to substract to\n");
            scanf("%d", &numbr_sub);
            printf("\nenter a number to substract\n");
            scanf("%d", &numbr);
            printf("\n%d\n", numbr_sub - numbr);
            break;
        default:
            break;
        } while (running);
    printf("\n\npress K to leave\n\n");
    scanf("%d", running);
    { printf("\ngoodbye,created by Goffrier\n"); }
    return 0;
}