//
// Created by konket on 02/10/2022.
//
#include<stdio.h>


int main(void)
{

    int month_day_value1;
    int month_day_value2;
    int month1, day1, year1;
    int month2, day2, year2;




    printf("Enter first date(mm/dd/yy)");
    scanf("%d/%d/%d",&month1, &day1, &year1 );
    printf("Enter second date(mm/dd/yy)");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", month1, day1, year1, month2, day2, year2);
        return 0;
    }
    else if(year2 > year1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
        return 0;
    } else
        month_day_value1 = month1 * 31 + day1;
        month_day_value2 = month2 * 31 + day2;
        if(month_day_value1 > 31)
        {
            month_day_value1 = month_day_value1 - 3;
        }
        if(month_day_value2 > 31)
        {
            month_day_value2 = month_day_value2 - 3;
        }
                if(month_day_value1 < month_day_value2)
                {
                    printf("%d/%d/%d is earlier than %d/%d/%d" , month1, day1, year1, month2, day2, year2);
                } else printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
                return 0;





}