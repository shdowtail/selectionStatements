

#include<stdio.h>
float commission;
float share_price;
float value;
float rival_commission;
int number_of_shares;


int rival(void)
{
    if(value < 2000)
    {
        rival_commission = number_of_shares * 33 + 0.03f * number_of_shares;
    }
    if(value >= 2000)
    {
        rival_commission = number_of_shares * 33 + 0.02f * number_of_shares;
    }
    printf("Rival broker commission: $%.2f",rival_commission);
    return 0;
}
int current(){

    if(value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
    {
        commission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + 00.34f * value;
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + 00.22f * value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + 00.11f * value;
    }
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }
    printf("Current broker commission: $%.2f\n", commission);

    return 0;
}
int main(void) {
    printf("Enter the number of shares: ");
    scanf("%d", &number_of_shares);
    printf("Enter the share price: ");
    scanf("%f", &share_price);
    value = number_of_shares * share_price;

    current();
    rival();
    return 0;
}
