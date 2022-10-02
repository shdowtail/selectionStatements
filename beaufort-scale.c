#include<stdio.h>


int calculation(float knots) {
    if (knots < 1.0f) {

        printf("Calm");

    } else if (knots >= 1.0f || knots == 3.0f) {

        printf("Light air");

    } else if (knots >= 4.0f || knots == 27.0f) {

        printf("Gale");

    } else if (knots >= 28.0f || knots == 47.0f) {

        printf("Storm");

    } else if (knots >= 48.0f || knots == 63.0f) {

        printf("Breeze");

    } else if (knots > 63.0f)
        printf("Hurricane");

    return 0;

}









int main(void)
{
    float knots_input;

    printf("Enter speed in knots xx.xx: ");
    scanf(" %d", &knots_input);
    calculation(knots_input);
    return 0;
}