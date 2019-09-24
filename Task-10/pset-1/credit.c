#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    long long ccNumber;

    
    do
    {
        ccNumber = get_long_long("What's your credit card number? ");
    }
    while (ccNumber <= 0);

   
    int countDigits = 0;
    long long validation = ccNumber;

    
    while (validation > 0)
    {
        validation = validation / 10;
        countDigits++;
    }

    
    if (countDigits != 13 && countDigits != 15 && countDigits != 16)
    {
        printf("INVALID\n");
    }

    
    int digit1  =   (((ccNumber % 100) / 10) * 2);
    int digit2  =   (((ccNumber % 10000) / 1000) * 2);
    int digit3  =   (((ccNumber % 1000000) / 100000) * 2);
    int digit4  =   (((ccNumber % 100000000) / 10000000) * 2);
    int digit5  =   (((ccNumber % 10000000000) / 1000000000) * 2);
    int digit6  =   (((ccNumber % 1000000000000) / 100000000000) * 2);
    int digit7  =   (((ccNumber % 100000000000000) / 10000000000000) * 2);
    int digit8  =   (((ccNumber % 10000000000000000) / 1000000000000000) * 2);

    
    int check1  =   ((digit1 % 10) + ((digit1 % 100) / 10));
    check1      =   (check1 + ((digit2 % 10) + ((digit2 % 100) / 10)));
    check1      =   (check1 + ((digit3 % 10) + ((digit3 % 100) / 10)));
    check1      =   (check1 + ((digit4 % 10) + ((digit4 % 100) / 10)));
    check1      =   (check1 + ((digit5 % 10) + ((digit5 % 100) / 10)));
    check1      =   (check1 + ((digit6 % 10) + ((digit6 % 100) / 10)));
    check1      =   (check1 + ((digit7 % 10) + ((digit7 % 100) / 10)));
    check1      =   (check1 + ((digit8 % 10) + ((digit8 % 100) / 10)));

   
    int digit9      =   (ccNumber % 10);
    int digit10     =   ((ccNumber % 1000) / 100);
    int digit11     =   ((ccNumber % 100000) / 10000);
    int digit12     =   ((ccNumber % 10000000) / 1000000);
    int digit13     =   ((ccNumber % 1000000000) / 100000000);
    int digit14     =   ((ccNumber % 100000000000) / 10000000000);
    int digit15     =   ((ccNumber % 10000000000000) / 1000000000000);
    int digit16     =   ((ccNumber % 1000000000000000) / 100000000000000);

 
    check1      =   (check1 + ((digit9 % 10) + ((digit9 % 100) / 10)));
    check1      =   (check1 + ((digit10 % 10) + ((digit10 % 100) / 10)));
    check1      =   (check1 + ((digit11 % 10) + ((digit11 % 100) / 10)));
    check1      =   (check1 + ((digit12 % 10) + ((digit12 % 100) / 10)));
    check1      =   (check1 + ((digit13 % 10) + ((digit13 % 100) / 10)));
    check1      =   (check1 + ((digit14 % 10) + ((digit14 % 100) / 10)));
    check1      =   (check1 + ((digit15 % 10) + ((digit15 % 100) / 10)));
    check1      =   (check1 + ((digit16 % 10) + ((digit16 % 100) / 10)));

    
    if (check1 % 10 != 0)
    {
        printf("INVALID\n");
    }


    long long amex = (ccNumber / 10000000000000);

    if (countDigits == 15)
    {
        if (amex != 34 && amex != 37)
        {
            printf("INVALID\n");
        }
        else
        {
            printf("AMEX\n");
        }

    }

    if (countDigits == 13)
    {
        printf("VISA\n");
    }

    if (countDigits == 16)
    {
        
        if ((digit8 / 2) == 4)
        {
            printf("VISA\n");
        }
        else
        {
            long long mastercard = (ccNumber / 100000000000000);

            if (mastercard != 51 && mastercard != 52 && mastercard != 53 && mastercard != 54
                && mastercard != 55)
            {
                printf("INVALID\n");
            }
            else
            {
                printf("MASTERCARD\n");
            }
        }
    }
}
