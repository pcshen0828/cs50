#include <cs50.h>
#include <stdio.h>


int main(void)
{
  printf("Hello, world!\n");
  string answer = get_string("What's your name? ");
  printf("Hello, %s\n", answer);
}