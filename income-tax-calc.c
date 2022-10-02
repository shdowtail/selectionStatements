
#include <stdio.h>



int tax_bracket_calculation(float income) {

    float tax_bracket_1_exact_value;
    float tax_bracket_2_exact_value;
    float tax_bracket_3_exact_value;
    float tax_bracket_4_exact_value;
    float tax_bracket_5_exact_value;
    float tax_bracket_6_exact_value;
/*defining formulas for calculating tax bracket values*/
    tax_bracket_1_exact_value = income * 0.01f;
    tax_bracket_2_exact_value = (income - 750.0f) * 0.02f + 7.50f;
    tax_bracket_3_exact_value = (income - 2250.00f) * 0.03f + 37.50f;
    tax_bracket_4_exact_value = (income - 3750.00f) * 0.04f + 82.50f;
    tax_bracket_5_exact_value = (income - 5250.00f) * 0.05f + 142.50f;
    tax_bracket_6_exact_value = (income - 7000.00f) * 0.06f + 230.00f;
/*defining the limits of tax brackets*/

    if (income <= 750.0f)
    {
        printf("Amount due:$ %.2f", tax_bracket_1_exact_value);
    } else if (income > 750.0f && income <= 2250.0f)
    {
        printf("Amount due:$ %.2f", tax_bracket_2_exact_value);
    } else if (income > 2250.0f && income <= 3750.0f)
    {
        printf("Amount due:$ %.2f", tax_bracket_3_exact_value);
    } else if (income > 3750.0f && income <= 5250.0f)
    {
        printf("Amount due:$ %.2f", tax_bracket_4_exact_value);
    } else if (income > 5250.0f && income <= 7000.0f)
    {
        printf("Amount due:$ %.2f", tax_bracket_5_exact_value);
    } else if (income > 7000.0f)
    {
        printf("Amount due:$ %.2f", tax_bracket_6_exact_value);
    } else
    {
        printf("Enter correct values\n");
    }

    return 0;
}






int main(void) {

    float taxable_income;
    printf("Enter taxable income:");
    scanf("%f", &taxable_income);
    tax_bracket_calculation(taxable_income);

    return 0;

}
