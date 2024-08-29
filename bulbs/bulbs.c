#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    int bits[8];
    int rev[8];
    int bit;
    string text = get_string("Message: ");
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        int letter = text[i];
        for (int j = 7; j >= 0; j--)
        {
            bits[j] = letter % 2;
            letter /= 2;
        }
        for (int k = 0; k < 8; k++)
        {
            // printf("%d", bits[k]);
            print_bulb(bits[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
