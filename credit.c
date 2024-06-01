#include "cs50.h"
#include "stdio.h"

int main(void)
{
    int digit;
    long int card;
    int resultEven = 0;
    int resultOdd = 0;
    int bau2 = 0;
    int i = 0;

    do
    {
        card = get_long("What's your card number? ");
    }
        while (card <= 0);

long int card2 = card;

    while (card != 0)
    {
        i++;
        if(i % 2 == 0)
        {
            int bau = (card % 10) * 2;

                if(bau >= 10)
                {
                    while(bau != 0)
                    {
                        bau2 = bau2 + bau % 10;
                        bau = bau/10;
                    }
                    resultEven = resultEven + bau2;
                }


                else
                {
                resultEven = (card % 10) * 2 + resultEven;
                }

        }

        else
        {
            resultOdd = card % 10 + resultOdd;
        }

    card = card / 10;

    }

    int sum = resultOdd + resultEven;
        if(sum % 10 == 0)
        {
            if (i == 15)
            {
                printf("AMEX\n");
            }

            else if (i == 13)
            {
                printf("VISA\n");
            }

            else if (i == 16)
            {
                if (card2 / 1000000000000000 == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("MASTERCARD\n");
                }
            }
        else
        {
            printf("INVALID\n");
        }


        }
}
