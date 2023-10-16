#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = (float)100 * letters / words;
    float S = (float)100 * sentences / words;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    printf("%f\n", L);
    printf("%f\n", S);

    if (index >= 16)
    {
        printf("Grade 16+");
    }
    else if (index < 1)
    {
        printf("Before Grade 1");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int length = strlen(text);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (isupper(text[i]) || islower(text[i]))
        {
            count++;
        }
    }

    return count;
}

int count_words(string text)
{
    int length = strlen(text);

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }

    // add the first word
    return count + 1;
}

int count_sentences(string text)
{
    int length = strlen(text);

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }

    return count;
}