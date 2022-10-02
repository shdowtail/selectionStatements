#include <stdio.h>

int main(void) {
    int number;
    int digit1;
    int digit2;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    digit1 = number / 10;
    digit2 = number % 10;
    if(number >= 100)
    {
        printf("Number you entered doesn't have two digits!");
        return 0;
    }
    printf("You entered the number: ");

    if (number == 10) {
        printf("ten");
    }
    if (digit1 == 1) {
        switch (digit2) {
            case 1:
                printf("eleven");
                break;
            case 2:
                printf("twelve");
                break;
            case 3:
                printf("thirteen");
                break;
            case 4:
                printf("fourteen");
                break;
            case 5:
                printf("fifteen");
                break;
            case 6:
                printf("sixteen");
                break;
            case 7:
                printf("seventeen");
                break;
            case 8:
                printf("eighteen");
                break;
            case 9:
                printf("nineteen");
                break;
            default:
                break;
        }

    } else if (digit1 > 1) {

        switch (digit1) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
            default:
                break;
        }
        if (digit2 == 0) {
            return 0;
        } else
            printf("-");
        switch (digit2) {
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            default:
                break;
        }
    }
    return 0;
}
//
// Created by konket on 03/10/2022.
//
