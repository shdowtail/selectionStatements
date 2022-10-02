//
// Created by konket on 02/10/2022.
//
/* A = 90 - 100, B = 80 - 89, C = 70 - 79, D = 60 - 69, F = 0 - 59*/
#include <stdio.h>


int main(void)
{


    int number;
    int digit1;

    printf("Enter numerical grade: ");

    scanf("%d", &number);

    if (number == 100)
    {
        printf("Letter grade: A");
        return 0;
    } else if (number > 100 || number < 0)
    {
        printf("Wrong value");
        return 0;

    }
    else
        digit1 = number / 10;

    printf("Letter grade");

    switch (digit1)
    {
        case 9:
            printf(" A");
            break;
        case 8:
            printf(" B");
            break;
        case 7:
            printf(" C");
            break;
        case 6:
            printf(" D");
            break;
        case 1:
            printf(" A");
            break;
        default:
            printf(" C");
            break;
    }
    return 0;
}
