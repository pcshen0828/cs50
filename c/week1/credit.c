#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool check_sum(long card, int card_length);

int main(void)
{
    long card = get_long("Number: ");

    const int card_length = log10(card) + 1;

    const bool valid = check_sum(card, card_length);

    int first_two_digits = card / pow(10, card_length - 2);
    int first_digit = card / pow(10, card_length - 1);

    if (valid)
    {
        if (card_length == 15 && (first_two_digits == 34 || first_two_digits == 37))
        {
            printf("AMEX\n");
        }
        else if (card_length == 16 && (first_two_digits == 51 || first_two_digits == 52 || first_two_digits == 53 ||
                                       first_two_digits == 54 || first_two_digits == 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((card_length == 13 || card_length == 16) && first_digit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
};

bool check_sum(long card, int card_length)
{
    int sum = 0;

    for (int i = 0; i < card_length; i++)
    {
        int digit = card % 10;

        if (i % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int doubled = digit * 2;
            if (doubled >= 10)
            {
                int ones = doubled % 10;
                int tens = doubled / 10;
                doubled = ones + tens;
            }
            sum += doubled;
        }

        card = card / 10;
    }

    if (sum % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
