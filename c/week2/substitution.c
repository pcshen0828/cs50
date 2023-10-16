#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool validate_key(string key);
string substitute(string plaintext, string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (!validate_key(argv[1]))
    {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }
    else
    {
        string key = argv[1];
        string plaintext = get_string("plaintext: ");
        string ciphertext = substitute(plaintext, key);
        printf("ciphertext: %s\n", ciphertext);
        return 0;
    }
}

bool validate_key(string key)
{
    int length = strlen(key);
    if (length != 26)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (!isalpha(key[i]))
            {
                return false;
            }
            else
            {
                for (int j = i + 1; j < length; j++)
                {
                    if (key[i] == key[j])
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

string substitute(string plaintext, string key)
{
    int length = strlen(plaintext);
    string ciphertext = plaintext;

    for (int i = 0; i < length; i++)
    {
        if (isupper(plaintext[i]))
        {
            int index = plaintext[i] - 'A';
            ciphertext[i] = toupper(key[index]);
        }
        else if (islower(plaintext[i]))
        {
            int index = plaintext[i] - 'a';
            ciphertext[i] = tolower(key[index]);
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    return ciphertext;
}